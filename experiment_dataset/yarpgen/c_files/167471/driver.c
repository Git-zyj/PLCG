#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)82;
signed char var_6 = (signed char)-67;
signed char var_8 = (signed char)-27;
short var_11 = (short)-28411;
int zero = 0;
unsigned short var_15 = (unsigned short)3615;
unsigned short var_16 = (unsigned short)11054;
unsigned char var_17 = (unsigned char)133;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
