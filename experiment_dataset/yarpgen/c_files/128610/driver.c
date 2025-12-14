#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 3847876648646563227ULL;
short var_7 = (short)4822;
int zero = 0;
int var_11 = -1577319550;
unsigned char var_12 = (unsigned char)161;
unsigned long long int var_13 = 16305422729962714096ULL;
unsigned char var_14 = (unsigned char)178;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
