#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-69;
unsigned long long int var_2 = 934778715638161925ULL;
unsigned short var_4 = (unsigned short)45533;
unsigned short var_5 = (unsigned short)56016;
unsigned short var_6 = (unsigned short)3674;
unsigned short var_10 = (unsigned short)14814;
int zero = 0;
signed char var_13 = (signed char)93;
unsigned char var_14 = (unsigned char)115;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
