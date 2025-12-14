#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30820;
unsigned short var_3 = (unsigned short)17497;
signed char var_5 = (signed char)74;
short var_6 = (short)-20010;
unsigned short var_10 = (unsigned short)58054;
long long int var_11 = 3600513301477663116LL;
unsigned char var_13 = (unsigned char)166;
signed char var_15 = (signed char)60;
int zero = 0;
long long int var_17 = 875237863207480007LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
