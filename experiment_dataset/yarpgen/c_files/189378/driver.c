#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8120321045410992074LL;
long long int var_5 = -1482429358440893376LL;
short var_10 = (short)20862;
int zero = 0;
long long int var_11 = -8825826230944710693LL;
unsigned short var_12 = (unsigned short)260;
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
