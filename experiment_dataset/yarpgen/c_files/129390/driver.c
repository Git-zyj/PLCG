#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 326332312;
unsigned char var_2 = (unsigned char)202;
signed char var_7 = (signed char)-95;
unsigned char var_8 = (unsigned char)156;
unsigned long long int var_12 = 5283139865225357446ULL;
unsigned short var_15 = (unsigned short)26782;
int zero = 0;
unsigned int var_20 = 3281991284U;
short var_21 = (short)-18106;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
