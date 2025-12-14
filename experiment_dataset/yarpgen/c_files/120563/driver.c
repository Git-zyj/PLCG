#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)3317;
unsigned int var_10 = 1224556566U;
signed char var_11 = (signed char)4;
unsigned long long int var_13 = 11009102605599529372ULL;
int zero = 0;
long long int var_15 = 7446888507291916699LL;
unsigned long long int var_16 = 7008210070698990830ULL;
void init() {
}

void checksum() {
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
