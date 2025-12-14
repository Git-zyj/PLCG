#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)137;
int var_3 = 1073685278;
int var_4 = 376601494;
unsigned long long int var_8 = 10565164027134613831ULL;
unsigned char var_10 = (unsigned char)202;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-27106;
unsigned short var_14 = (unsigned short)65001;
short var_15 = (short)24351;
short var_16 = (short)-9702;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-12241;
int var_19 = 1223706977;
signed char var_20 = (signed char)46;
int var_21 = -878298232;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
