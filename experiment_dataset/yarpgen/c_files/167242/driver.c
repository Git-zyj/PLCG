#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)110;
unsigned int var_9 = 45097725U;
unsigned char var_10 = (unsigned char)89;
unsigned int var_11 = 2926156282U;
unsigned int var_12 = 207225335U;
unsigned long long int var_13 = 16396576434566599866ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)11920;
short var_19 = (short)-16294;
unsigned long long int var_20 = 12594928224306826062ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
