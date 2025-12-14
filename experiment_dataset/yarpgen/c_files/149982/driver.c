#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-38;
unsigned int var_4 = 671850564U;
unsigned short var_8 = (unsigned short)16342;
int zero = 0;
unsigned long long int var_10 = 8440227074990242301ULL;
unsigned int var_11 = 777614166U;
long long int var_12 = 677203495960311572LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
