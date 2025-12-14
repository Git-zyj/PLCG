#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29382;
unsigned short var_3 = (unsigned short)12296;
short var_7 = (short)-23339;
short var_8 = (short)-24885;
long long int var_9 = 8367550208053000930LL;
int zero = 0;
unsigned long long int var_10 = 14674130896074174220ULL;
unsigned short var_11 = (unsigned short)17034;
short var_12 = (short)28506;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
