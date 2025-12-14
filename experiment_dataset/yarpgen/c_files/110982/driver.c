#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 2147436580U;
unsigned short var_11 = (unsigned short)6643;
int var_12 = 1503486971;
unsigned char var_17 = (unsigned char)148;
long long int var_19 = 6033321465010195971LL;
int zero = 0;
unsigned short var_20 = (unsigned short)26409;
unsigned short var_21 = (unsigned short)56168;
signed char var_22 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
