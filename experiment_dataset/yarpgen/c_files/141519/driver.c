#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1128457422U;
unsigned char var_1 = (unsigned char)224;
unsigned int var_2 = 1327464617U;
int var_3 = -1856261283;
unsigned char var_9 = (unsigned char)214;
int zero = 0;
unsigned char var_13 = (unsigned char)25;
unsigned char var_14 = (unsigned char)3;
int var_15 = 2085889824;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
