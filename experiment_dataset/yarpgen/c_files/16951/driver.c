#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17553;
short var_4 = (short)5443;
unsigned long long int var_6 = 15907208784151293641ULL;
int zero = 0;
unsigned long long int var_12 = 2753541165866912831ULL;
unsigned long long int var_13 = 11688875993995455134ULL;
unsigned long long int var_14 = 14075991059747591517ULL;
void init() {
}

void checksum() {
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
