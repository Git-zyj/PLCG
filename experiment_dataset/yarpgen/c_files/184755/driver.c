#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36652;
unsigned long long int var_2 = 3715068871180494749ULL;
unsigned long long int var_11 = 2093859214488784404ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)192;
signed char var_13 = (signed char)-83;
short var_14 = (short)31952;
unsigned char var_15 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
