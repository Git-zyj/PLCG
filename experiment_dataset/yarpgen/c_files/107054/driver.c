#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 301358340;
unsigned int var_2 = 2907896959U;
int var_3 = 331126466;
unsigned long long int var_5 = 9199883972323133539ULL;
int var_6 = 164290446;
unsigned short var_8 = (unsigned short)60800;
int var_9 = -1545880334;
int zero = 0;
int var_12 = -813860019;
unsigned long long int var_13 = 7997482423867518228ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
