#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2130454204;
unsigned char var_2 = (unsigned char)199;
signed char var_3 = (signed char)-102;
unsigned char var_4 = (unsigned char)63;
short var_9 = (short)19040;
int var_11 = -2088855729;
int zero = 0;
signed char var_12 = (signed char)-22;
signed char var_13 = (signed char)-58;
unsigned int var_14 = 2370932716U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
