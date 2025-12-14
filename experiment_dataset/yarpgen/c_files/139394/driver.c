#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)168;
unsigned short var_6 = (unsigned short)25271;
unsigned char var_10 = (unsigned char)47;
signed char var_12 = (signed char)-11;
unsigned short var_13 = (unsigned short)55735;
int zero = 0;
int var_14 = -299259060;
unsigned int var_15 = 3017288555U;
unsigned char var_16 = (unsigned char)83;
void init() {
}

void checksum() {
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
