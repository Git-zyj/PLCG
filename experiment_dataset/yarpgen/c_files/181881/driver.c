#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5563188697746972310LL;
unsigned int var_1 = 2013035557U;
unsigned int var_2 = 3047515121U;
unsigned char var_8 = (unsigned char)213;
unsigned short var_9 = (unsigned short)47662;
signed char var_11 = (signed char)77;
long long int var_12 = 6444085633452348538LL;
int zero = 0;
int var_14 = 1437662415;
signed char var_15 = (signed char)32;
void init() {
}

void checksum() {
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
