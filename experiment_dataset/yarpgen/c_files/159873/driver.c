#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)22208;
unsigned short var_8 = (unsigned short)39682;
short var_11 = (short)12355;
int zero = 0;
unsigned short var_14 = (unsigned short)49740;
unsigned short var_15 = (unsigned short)54519;
short var_16 = (short)-1007;
unsigned short var_17 = (unsigned short)45868;
short var_18 = (short)-10060;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
