#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)123;
int var_8 = -1869469290;
unsigned long long int var_11 = 4488494856605092928ULL;
short var_13 = (short)14800;
int zero = 0;
int var_16 = 1408326917;
int var_17 = 602497903;
unsigned short var_18 = (unsigned short)17784;
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
