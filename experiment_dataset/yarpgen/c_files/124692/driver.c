#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)51;
short var_5 = (short)-29598;
unsigned long long int var_7 = 7777148665012593898ULL;
unsigned long long int var_9 = 10639874570467641407ULL;
int zero = 0;
signed char var_12 = (signed char)80;
unsigned char var_13 = (unsigned char)74;
void init() {
}

void checksum() {
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
