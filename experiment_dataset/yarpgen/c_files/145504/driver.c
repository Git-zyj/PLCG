#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4039;
unsigned char var_3 = (unsigned char)173;
unsigned char var_6 = (unsigned char)150;
unsigned int var_9 = 1310641494U;
unsigned int var_10 = 3361309913U;
unsigned char var_16 = (unsigned char)53;
int zero = 0;
unsigned short var_18 = (unsigned short)60454;
int var_19 = -1449749014;
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
