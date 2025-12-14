#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20865;
unsigned int var_2 = 896586047U;
long long int var_3 = 8439703834697404140LL;
signed char var_5 = (signed char)-18;
long long int var_8 = -1584304586738556600LL;
unsigned char var_12 = (unsigned char)18;
int zero = 0;
unsigned char var_15 = (unsigned char)222;
unsigned char var_16 = (unsigned char)116;
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
