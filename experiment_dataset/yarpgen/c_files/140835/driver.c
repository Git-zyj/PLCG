#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 15653898846552794232ULL;
signed char var_12 = (signed char)-70;
int var_13 = 1794735093;
unsigned char var_15 = (unsigned char)161;
short var_17 = (short)6149;
int zero = 0;
short var_19 = (short)19825;
unsigned int var_20 = 21736555U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
