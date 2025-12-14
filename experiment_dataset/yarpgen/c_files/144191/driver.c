#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14845531836966268418ULL;
signed char var_3 = (signed char)121;
unsigned long long int var_9 = 2165778063601465390ULL;
int zero = 0;
unsigned int var_13 = 1951596966U;
unsigned short var_14 = (unsigned short)29134;
void init() {
}

void checksum() {
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
