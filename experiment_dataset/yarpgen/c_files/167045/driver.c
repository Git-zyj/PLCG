#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57101;
signed char var_2 = (signed char)-56;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1356620739U;
unsigned long long int var_9 = 1235859033055129202ULL;
_Bool var_10 = (_Bool)1;
unsigned int var_14 = 304760594U;
unsigned long long int var_15 = 393181744906694281ULL;
unsigned long long int var_18 = 9013797625024875961ULL;
int zero = 0;
signed char var_20 = (signed char)112;
long long int var_21 = 1266014190048666953LL;
unsigned int var_22 = 4127905877U;
short var_23 = (short)7607;
short var_24 = (short)-13416;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
