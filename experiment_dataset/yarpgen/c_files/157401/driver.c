#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1069744056;
unsigned int var_3 = 860603479U;
unsigned short var_10 = (unsigned short)43060;
int zero = 0;
long long int var_11 = 6257307823935857376LL;
short var_12 = (short)17125;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
