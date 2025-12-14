#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)164;
short var_5 = (short)26279;
signed char var_6 = (signed char)57;
signed char var_7 = (signed char)-96;
unsigned char var_11 = (unsigned char)59;
int zero = 0;
unsigned int var_14 = 4249521902U;
unsigned short var_15 = (unsigned short)59437;
unsigned long long int var_16 = 6003281855648423023ULL;
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
