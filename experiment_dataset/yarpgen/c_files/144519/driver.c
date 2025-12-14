#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2152609383365696499ULL;
unsigned long long int var_15 = 9397307435340082154ULL;
int zero = 0;
unsigned long long int var_18 = 8080242213408220482ULL;
unsigned short var_19 = (unsigned short)9594;
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
