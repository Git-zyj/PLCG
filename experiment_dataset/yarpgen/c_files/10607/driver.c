#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1021980392;
signed char var_6 = (signed char)120;
short var_7 = (short)-10565;
unsigned int var_12 = 2554173679U;
long long int var_13 = 4040135524498122547LL;
int zero = 0;
signed char var_20 = (signed char)40;
signed char var_21 = (signed char)22;
unsigned char var_22 = (unsigned char)192;
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
