#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)5;
int var_12 = -1282889689;
int zero = 0;
unsigned long long int var_19 = 787401442953131133ULL;
unsigned long long int var_20 = 15724803578593650273ULL;
unsigned long long int var_21 = 11620017334870771494ULL;
unsigned long long int var_22 = 12765827592983713282ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
