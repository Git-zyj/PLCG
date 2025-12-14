#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2396822834077594226LL;
signed char var_3 = (signed char)6;
short var_5 = (short)-18336;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-44;
unsigned long long int var_16 = 7547528155908870063ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
