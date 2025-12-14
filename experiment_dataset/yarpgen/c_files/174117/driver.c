#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 14657068814413187109ULL;
unsigned long long int var_7 = 4514884556434146303ULL;
unsigned long long int var_11 = 11961703578634876268ULL;
unsigned long long int var_12 = 9273314293384650300ULL;
unsigned char var_13 = (unsigned char)249;
unsigned short var_16 = (unsigned short)51128;
unsigned long long int var_17 = 6008271112128995564ULL;
signed char var_18 = (signed char)-44;
int zero = 0;
unsigned int var_19 = 1613579256U;
signed char var_20 = (signed char)-73;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
