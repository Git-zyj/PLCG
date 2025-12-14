#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3060228221U;
unsigned short var_2 = (unsigned short)41186;
short var_4 = (short)14254;
int var_6 = -2063677302;
long long int var_8 = -7797769106331734048LL;
int var_9 = 154187453;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = -4687920938273204771LL;
long long int var_16 = 6805836649132942653LL;
unsigned int var_17 = 1260333239U;
int var_18 = 1120900477;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
