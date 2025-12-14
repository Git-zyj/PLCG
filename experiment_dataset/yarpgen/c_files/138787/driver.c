#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17221;
long long int var_5 = 1613711991876514232LL;
long long int var_6 = -3299414531833112001LL;
long long int var_7 = 5331252988195930003LL;
unsigned char var_8 = (unsigned char)93;
int zero = 0;
unsigned char var_11 = (unsigned char)77;
unsigned short var_12 = (unsigned short)8720;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
