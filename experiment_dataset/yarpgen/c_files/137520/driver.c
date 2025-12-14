#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)166;
signed char var_9 = (signed char)-2;
unsigned short var_10 = (unsigned short)14710;
unsigned short var_14 = (unsigned short)31755;
unsigned char var_16 = (unsigned char)91;
int zero = 0;
int var_19 = 1033931716;
unsigned long long int var_20 = 13675419685534461632ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
