#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 687845473632058162ULL;
unsigned long long int var_6 = 12996231249084695081ULL;
unsigned int var_9 = 3274036356U;
int var_10 = 753541212;
short var_11 = (short)10498;
int zero = 0;
unsigned long long int var_16 = 7867101272241038331ULL;
long long int var_17 = 991048442048998922LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
