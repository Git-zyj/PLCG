#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4548475544774157222LL;
unsigned short var_7 = (unsigned short)49753;
int zero = 0;
unsigned int var_12 = 3267001028U;
long long int var_13 = 6693592081488617843LL;
unsigned int var_14 = 575634341U;
unsigned short var_15 = (unsigned short)55163;
unsigned char var_16 = (unsigned char)238;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
