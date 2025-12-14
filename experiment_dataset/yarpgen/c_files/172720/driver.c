#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6426278731056273226LL;
unsigned short var_4 = (unsigned short)58505;
unsigned char var_5 = (unsigned char)196;
unsigned char var_6 = (unsigned char)12;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)133;
int zero = 0;
unsigned char var_14 = (unsigned char)8;
unsigned long long int var_15 = 4262567993044833533ULL;
void init() {
}

void checksum() {
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
