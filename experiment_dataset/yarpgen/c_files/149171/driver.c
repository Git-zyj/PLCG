#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11887553344699151118ULL;
unsigned short var_6 = (unsigned short)37494;
unsigned char var_7 = (unsigned char)215;
int var_8 = 1729777614;
int var_10 = -226461383;
long long int var_12 = 5784066064840436999LL;
int var_15 = 1378621567;
short var_16 = (short)-8704;
int zero = 0;
short var_18 = (short)16508;
long long int var_19 = -6067998400155318673LL;
void init() {
}

void checksum() {
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
