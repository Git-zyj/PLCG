#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1230551011;
unsigned long long int var_1 = 8300268845706265877ULL;
int var_4 = -585459290;
int var_5 = 793642596;
int zero = 0;
int var_15 = -341789196;
unsigned long long int var_16 = 17147886279739574706ULL;
int var_17 = 1101809194;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
