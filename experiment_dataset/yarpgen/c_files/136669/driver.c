#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8121419243069927918ULL;
unsigned long long int var_6 = 5229451885186101257ULL;
unsigned long long int var_7 = 15962092876483871752ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)53260;
unsigned char var_21 = (unsigned char)217;
unsigned long long int var_22 = 15778678020444462728ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
