#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2070877790901539691ULL;
unsigned int var_2 = 2809571903U;
unsigned char var_5 = (unsigned char)172;
int var_7 = 1483392380;
unsigned short var_9 = (unsigned short)51894;
int zero = 0;
long long int var_10 = -712146918016702951LL;
unsigned short var_11 = (unsigned short)42759;
long long int var_12 = 3571840855251340406LL;
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
