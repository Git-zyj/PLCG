#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17638202938626480289ULL;
unsigned int var_6 = 548867094U;
unsigned long long int var_15 = 18085976786645113320ULL;
unsigned char var_17 = (unsigned char)79;
int zero = 0;
short var_18 = (short)28625;
long long int var_19 = -8989591312502150028LL;
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
