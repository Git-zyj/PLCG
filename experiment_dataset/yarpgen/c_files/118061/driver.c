#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15959162711899964461ULL;
signed char var_5 = (signed char)-126;
int zero = 0;
long long int var_10 = -3752288588069292536LL;
unsigned int var_11 = 2215488356U;
signed char var_12 = (signed char)88;
unsigned long long int var_13 = 1065278848976697615ULL;
unsigned char var_14 = (unsigned char)121;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
