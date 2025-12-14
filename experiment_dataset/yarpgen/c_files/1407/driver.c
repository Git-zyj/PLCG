#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1239910413;
signed char var_5 = (signed char)-117;
unsigned short var_6 = (unsigned short)32387;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-68;
unsigned short var_11 = (unsigned short)43165;
signed char var_12 = (signed char)-34;
int var_14 = -484359712;
unsigned long long int var_16 = 14156404473683983276ULL;
int zero = 0;
long long int var_18 = -6688022012784055419LL;
signed char var_19 = (signed char)-74;
long long int var_20 = 4526443214378809904LL;
unsigned char var_21 = (unsigned char)121;
unsigned long long int var_22 = 18320892626108837859ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
