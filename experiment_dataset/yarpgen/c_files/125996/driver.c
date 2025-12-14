#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 238941577187732548ULL;
unsigned long long int var_3 = 11839413736790741334ULL;
int zero = 0;
unsigned long long int var_10 = 10222635761651005488ULL;
unsigned int var_11 = 3475942029U;
unsigned int var_12 = 4157067771U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
