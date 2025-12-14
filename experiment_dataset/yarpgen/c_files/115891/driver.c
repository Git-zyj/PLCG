#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63935;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)27876;
unsigned short var_5 = (unsigned short)33861;
unsigned short var_6 = (unsigned short)62319;
unsigned long long int var_10 = 17213115517310948274ULL;
unsigned char var_13 = (unsigned char)117;
unsigned int var_18 = 81325861U;
int zero = 0;
unsigned short var_20 = (unsigned short)55341;
unsigned char var_21 = (unsigned char)237;
unsigned long long int var_22 = 3490911831282648438ULL;
unsigned long long int var_23 = 5907253696571120425ULL;
void init() {
}

void checksum() {
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
