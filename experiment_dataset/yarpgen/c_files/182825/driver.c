#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1373449648U;
unsigned char var_7 = (unsigned char)154;
unsigned short var_9 = (unsigned short)32306;
int zero = 0;
long long int var_11 = -7717873231101180546LL;
signed char var_12 = (signed char)-38;
unsigned long long int var_13 = 1536727578813473327ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
