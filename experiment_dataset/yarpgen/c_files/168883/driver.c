#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)40813;
unsigned int var_6 = 4114187539U;
unsigned int var_11 = 4085929961U;
int zero = 0;
long long int var_13 = 2865875102563322634LL;
unsigned long long int var_14 = 16100466396050789395ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
