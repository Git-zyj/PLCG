#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1397864154118130135ULL;
signed char var_4 = (signed char)-97;
int var_7 = -41504287;
signed char var_9 = (signed char)50;
unsigned char var_12 = (unsigned char)19;
int zero = 0;
signed char var_15 = (signed char)55;
unsigned short var_16 = (unsigned short)32105;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
