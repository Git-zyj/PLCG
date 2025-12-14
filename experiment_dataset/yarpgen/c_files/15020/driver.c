#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3192992667U;
_Bool var_2 = (_Bool)1;
long long int var_3 = -4440848435525698125LL;
unsigned long long int var_5 = 17978449719833031564ULL;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)42380;
unsigned int var_10 = 2231849935U;
unsigned int var_11 = 3681454739U;
signed char var_12 = (signed char)(-127 - 1);
short var_13 = (short)-7635;
signed char var_14 = (signed char)70;
unsigned long long int var_15 = 902028996638197202ULL;
unsigned long long int var_16 = 13605412617765656796ULL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)49675;
int zero = 0;
long long int var_20 = 2068629453592133872LL;
signed char var_21 = (signed char)-22;
signed char var_22 = (signed char)-37;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
