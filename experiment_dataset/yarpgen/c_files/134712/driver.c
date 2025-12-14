#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19299;
signed char var_2 = (signed char)10;
signed char var_7 = (signed char)4;
signed char var_8 = (signed char)-23;
unsigned short var_11 = (unsigned short)5071;
long long int var_12 = 4967877662834469391LL;
short var_13 = (short)-9154;
int zero = 0;
short var_15 = (short)-29753;
short var_16 = (short)-7595;
short var_17 = (short)-31819;
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
