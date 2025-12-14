#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 176756030;
short var_8 = (short)854;
unsigned short var_13 = (unsigned short)36513;
int zero = 0;
unsigned long long int var_19 = 5381871409939046359ULL;
unsigned long long int var_20 = 7785513784176102992ULL;
int var_21 = -766616610;
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
