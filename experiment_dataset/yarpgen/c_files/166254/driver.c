#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)34985;
int var_9 = 677308995;
unsigned long long int var_13 = 6928564375750468183ULL;
long long int var_14 = 1300064323855086057LL;
int zero = 0;
unsigned char var_15 = (unsigned char)139;
unsigned char var_16 = (unsigned char)117;
void init() {
}

void checksum() {
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
