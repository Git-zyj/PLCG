#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)151;
unsigned char var_2 = (unsigned char)15;
unsigned char var_7 = (unsigned char)208;
unsigned char var_9 = (unsigned char)66;
signed char var_13 = (signed char)32;
int zero = 0;
unsigned int var_17 = 1344961818U;
int var_18 = -1051020516;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
