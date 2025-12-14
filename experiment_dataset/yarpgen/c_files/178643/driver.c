#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)195;
long long int var_3 = 190146457722696291LL;
unsigned short var_5 = (unsigned short)254;
int var_7 = -129070041;
int var_9 = -485109906;
signed char var_10 = (signed char)-19;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)17691;
int zero = 0;
int var_17 = 2021891956;
int var_18 = 540419514;
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
