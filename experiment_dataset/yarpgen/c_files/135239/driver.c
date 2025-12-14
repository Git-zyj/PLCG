#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1778087396;
long long int var_6 = 5444384721579497039LL;
unsigned int var_8 = 2554211963U;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_12 = -1059911460;
unsigned int var_13 = 2514643172U;
signed char var_14 = (signed char)-89;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
