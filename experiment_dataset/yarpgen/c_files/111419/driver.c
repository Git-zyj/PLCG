#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 527195468U;
unsigned short var_7 = (unsigned short)18039;
unsigned short var_9 = (unsigned short)30930;
unsigned long long int var_12 = 14193914093796276152ULL;
int zero = 0;
long long int var_20 = 6903400241943224794LL;
unsigned long long int var_21 = 5741630890989985529ULL;
void init() {
}

void checksum() {
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
