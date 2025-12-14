#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11007855226255103341ULL;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)11169;
unsigned char var_7 = (unsigned char)127;
int zero = 0;
unsigned long long int var_12 = 4303755347701351856ULL;
long long int var_13 = -210941449064249630LL;
short var_14 = (short)-6675;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
