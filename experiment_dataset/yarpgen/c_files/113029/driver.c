#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15224675410490823255ULL;
int var_2 = -343511466;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 634141355666564251ULL;
unsigned short var_8 = (unsigned short)18931;
unsigned char var_11 = (unsigned char)252;
short var_12 = (short)-692;
signed char var_13 = (signed char)-74;
int zero = 0;
unsigned long long int var_14 = 13681116759906974465ULL;
long long int var_15 = -4908134747775524299LL;
unsigned char var_16 = (unsigned char)71;
unsigned long long int var_17 = 4801916086346206591ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
