#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-15721;
unsigned long long int var_8 = 4039305461662470028ULL;
signed char var_13 = (signed char)105;
unsigned char var_15 = (unsigned char)119;
int zero = 0;
unsigned long long int var_19 = 4670957250326033921ULL;
unsigned char var_20 = (unsigned char)21;
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
