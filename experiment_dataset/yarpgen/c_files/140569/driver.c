#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5899270643586840221LL;
unsigned long long int var_10 = 6936569768052196363ULL;
int var_11 = 556529522;
unsigned short var_13 = (unsigned short)51866;
int zero = 0;
long long int var_14 = 3500300924707420271LL;
unsigned short var_15 = (unsigned short)31513;
unsigned int var_16 = 2221489992U;
void init() {
}

void checksum() {
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
