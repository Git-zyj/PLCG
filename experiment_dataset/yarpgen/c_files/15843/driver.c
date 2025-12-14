#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)55115;
unsigned short var_8 = (unsigned short)58741;
unsigned long long int var_10 = 13647765514838372523ULL;
int zero = 0;
unsigned long long int var_11 = 2120439550537709182ULL;
unsigned short var_12 = (unsigned short)53608;
short var_13 = (short)-21971;
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
