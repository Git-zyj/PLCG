#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 17666500962696950032ULL;
int zero = 0;
unsigned int var_14 = 1284539752U;
unsigned int var_15 = 3466039557U;
unsigned long long int var_16 = 5913784380275624087ULL;
unsigned short var_17 = (unsigned short)11456;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
