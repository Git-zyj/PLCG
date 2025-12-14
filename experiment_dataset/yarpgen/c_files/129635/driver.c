#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 305047464U;
int var_12 = -1231588425;
unsigned char var_17 = (unsigned char)104;
unsigned long long int var_18 = 2207876300519564420ULL;
int zero = 0;
unsigned long long int var_19 = 3390765405303245860ULL;
long long int var_20 = 1195179398289128437LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
