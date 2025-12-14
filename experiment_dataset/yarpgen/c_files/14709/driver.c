#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)71;
unsigned int var_8 = 1614497092U;
short var_9 = (short)31097;
signed char var_10 = (signed char)31;
int zero = 0;
unsigned int var_15 = 426746139U;
unsigned char var_16 = (unsigned char)28;
unsigned long long int var_17 = 17345900957748376636ULL;
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
