#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9505250185555392128ULL;
long long int var_1 = -1717620232821612797LL;
long long int var_5 = -3103022367878441863LL;
signed char var_9 = (signed char)97;
_Bool var_10 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1882668723U;
unsigned char var_16 = (unsigned char)244;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)41231;
int zero = 0;
unsigned int var_19 = 2808968338U;
int var_20 = -1274561370;
unsigned long long int var_21 = 2724999953325530605ULL;
unsigned int var_22 = 2735138986U;
short var_23 = (short)18618;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
