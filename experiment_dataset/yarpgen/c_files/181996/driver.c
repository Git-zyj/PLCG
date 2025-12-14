#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47657;
unsigned short var_6 = (unsigned short)47660;
long long int var_9 = -1083207687569695080LL;
unsigned short var_13 = (unsigned short)26863;
int zero = 0;
unsigned char var_15 = (unsigned char)218;
unsigned char var_16 = (unsigned char)51;
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
