#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2050324807U;
unsigned long long int var_2 = 12950915719735601818ULL;
signed char var_10 = (signed char)13;
unsigned long long int var_13 = 16800566556105093992ULL;
unsigned char var_14 = (unsigned char)174;
unsigned char var_16 = (unsigned char)25;
int zero = 0;
int var_18 = 1007565653;
int var_19 = -1520299539;
int var_20 = 306400696;
unsigned char var_21 = (unsigned char)206;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
