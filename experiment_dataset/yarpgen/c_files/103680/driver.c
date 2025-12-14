#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7440;
unsigned long long int var_5 = 12091043574761855332ULL;
short var_6 = (short)3383;
_Bool var_7 = (_Bool)1;
int zero = 0;
short var_17 = (short)-27590;
unsigned char var_18 = (unsigned char)28;
unsigned char var_19 = (unsigned char)189;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
