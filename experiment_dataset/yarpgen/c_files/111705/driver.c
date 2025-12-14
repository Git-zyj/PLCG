#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13149561786511586906ULL;
unsigned long long int var_15 = 2727528448430082241ULL;
signed char var_18 = (signed char)36;
int zero = 0;
unsigned char var_20 = (unsigned char)205;
short var_21 = (short)-31142;
int var_22 = -1463534143;
signed char var_23 = (signed char)108;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
