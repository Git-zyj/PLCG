#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)52;
short var_8 = (short)-24771;
unsigned char var_10 = (unsigned char)16;
unsigned int var_11 = 4264276335U;
int zero = 0;
unsigned short var_13 = (unsigned short)40708;
long long int var_14 = -301709691338841985LL;
signed char var_15 = (signed char)-112;
unsigned long long int var_16 = 12469380736879861312ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
