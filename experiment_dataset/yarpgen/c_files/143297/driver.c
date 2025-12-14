#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1984783823;
unsigned int var_1 = 3575832336U;
signed char var_3 = (signed char)89;
unsigned short var_5 = (unsigned short)40204;
int zero = 0;
unsigned long long int var_13 = 13848793229072463597ULL;
unsigned char var_14 = (unsigned char)144;
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
