#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15744561656131661596ULL;
unsigned char var_5 = (unsigned char)250;
unsigned long long int var_6 = 11106749257156153712ULL;
int var_7 = -1053760377;
unsigned short var_8 = (unsigned short)33750;
unsigned long long int var_10 = 2823332068112927776ULL;
long long int var_12 = -732559084293480838LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 15836196561349386531ULL;
signed char var_16 = (signed char)-87;
unsigned long long int var_17 = 16096977867889434494ULL;
signed char var_18 = (signed char)1;
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
