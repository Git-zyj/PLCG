#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2627972857706353201LL;
_Bool var_3 = (_Bool)1;
unsigned int var_8 = 63153104U;
unsigned int var_11 = 2649762610U;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3850836706U;
signed char var_18 = (signed char)-54;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
