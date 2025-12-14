#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5960;
long long int var_3 = 2841996677468489764LL;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
signed char var_10 = (signed char)-76;
int zero = 0;
signed char var_11 = (signed char)56;
short var_12 = (short)-26499;
signed char var_13 = (signed char)9;
signed char var_14 = (signed char)21;
long long int var_15 = -2977991663223959730LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
