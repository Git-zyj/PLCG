#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 13461380258288306247ULL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
int var_11 = -1040868956;
int zero = 0;
unsigned int var_12 = 3435989588U;
unsigned int var_13 = 2117485740U;
short var_14 = (short)32330;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
