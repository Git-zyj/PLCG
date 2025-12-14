#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1044851943;
signed char var_2 = (signed char)-110;
unsigned char var_3 = (unsigned char)133;
short var_10 = (short)-12816;
unsigned int var_15 = 1363030003U;
signed char var_18 = (signed char)49;
int zero = 0;
unsigned short var_19 = (unsigned short)17876;
unsigned char var_20 = (unsigned char)80;
unsigned char var_21 = (unsigned char)23;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
