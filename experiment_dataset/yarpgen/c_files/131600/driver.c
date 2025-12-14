#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)140;
long long int var_2 = 3276312625097662913LL;
short var_3 = (short)23721;
unsigned int var_4 = 440522447U;
int var_5 = 716729375;
signed char var_10 = (signed char)-66;
unsigned char var_11 = (unsigned char)205;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-4334;
unsigned char var_14 = (unsigned char)208;
unsigned int var_15 = 1119210913U;
unsigned short var_17 = (unsigned short)29624;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2309893494U;
signed char var_20 = (signed char)-101;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
