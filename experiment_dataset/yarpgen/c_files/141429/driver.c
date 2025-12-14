#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2439686790U;
unsigned char var_3 = (unsigned char)213;
int var_8 = -437595223;
unsigned long long int var_10 = 17788374873964861152ULL;
unsigned long long int var_12 = 6288781844837813516ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)46898;
unsigned long long int var_19 = 2496399163748985752ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
