#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8617582238778724457LL;
int var_2 = -611380667;
long long int var_3 = -6042603316557541179LL;
unsigned char var_5 = (unsigned char)139;
unsigned char var_11 = (unsigned char)147;
long long int var_14 = -6798753344283306362LL;
long long int var_15 = -2336765423865495831LL;
long long int var_17 = 3301329352404811425LL;
int zero = 0;
unsigned char var_18 = (unsigned char)24;
int var_19 = -1209339147;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
