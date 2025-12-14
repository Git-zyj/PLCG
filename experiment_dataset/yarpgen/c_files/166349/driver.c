#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17181;
long long int var_2 = 222905463750242371LL;
unsigned short var_3 = (unsigned short)30863;
unsigned char var_4 = (unsigned char)180;
unsigned short var_5 = (unsigned short)42305;
unsigned char var_6 = (unsigned char)159;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 10210501036607113464ULL;
unsigned char var_14 = (unsigned char)69;
unsigned char var_15 = (unsigned char)241;
unsigned char var_16 = (unsigned char)245;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
