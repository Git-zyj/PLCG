#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5319471044663045831ULL;
unsigned short var_3 = (unsigned short)57504;
unsigned long long int var_4 = 1917573943501748323ULL;
long long int var_6 = 2219192828054171218LL;
unsigned short var_8 = (unsigned short)58372;
unsigned int var_9 = 240026910U;
int zero = 0;
int var_13 = -394933619;
unsigned short var_14 = (unsigned short)60221;
unsigned int var_15 = 257432698U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
