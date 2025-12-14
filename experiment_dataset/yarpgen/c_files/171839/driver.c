#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 10522193274957070214ULL;
unsigned char var_7 = (unsigned char)98;
signed char var_11 = (signed char)18;
int zero = 0;
unsigned long long int var_16 = 2403843123933344461ULL;
signed char var_17 = (signed char)5;
unsigned long long int var_18 = 11386634643745405347ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
