#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1008884069777969854ULL;
unsigned short var_6 = (unsigned short)53970;
unsigned long long int var_10 = 15743564258653204409ULL;
int var_11 = -1973286557;
unsigned int var_13 = 320249923U;
unsigned short var_14 = (unsigned short)63958;
int zero = 0;
unsigned char var_15 = (unsigned char)119;
int var_16 = -1757553459;
signed char var_17 = (signed char)68;
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
