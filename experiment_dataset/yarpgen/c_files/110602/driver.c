#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1102447845U;
unsigned short var_11 = (unsigned short)219;
long long int var_14 = -6661818927752585958LL;
unsigned char var_15 = (unsigned char)27;
int zero = 0;
unsigned int var_16 = 1163906735U;
unsigned long long int var_17 = 8759582102065782985ULL;
unsigned char var_18 = (unsigned char)171;
int var_19 = 191890365;
long long int var_20 = -8740006379520984613LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
