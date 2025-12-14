#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)26043;
int var_5 = 1438753458;
unsigned long long int var_8 = 17518854879390474989ULL;
unsigned short var_11 = (unsigned short)24190;
int zero = 0;
unsigned int var_14 = 3670246358U;
unsigned long long int var_15 = 17136033384899134105ULL;
unsigned short var_16 = (unsigned short)47529;
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
