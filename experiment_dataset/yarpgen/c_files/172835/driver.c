#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)52;
unsigned long long int var_4 = 2840989051473233077ULL;
unsigned long long int var_5 = 14821921470148988281ULL;
unsigned int var_6 = 742472034U;
short var_8 = (short)27527;
unsigned short var_11 = (unsigned short)39904;
signed char var_12 = (signed char)-125;
unsigned char var_13 = (unsigned char)191;
int zero = 0;
short var_14 = (short)-414;
unsigned long long int var_15 = 15884591679238803085ULL;
unsigned short var_16 = (unsigned short)36471;
unsigned short var_17 = (unsigned short)41110;
signed char var_18 = (signed char)102;
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
