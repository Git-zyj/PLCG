#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1497573409;
unsigned short var_13 = (unsigned short)58327;
unsigned short var_17 = (unsigned short)27446;
int zero = 0;
unsigned char var_18 = (unsigned char)39;
long long int var_19 = -1288357494873823560LL;
unsigned short var_20 = (unsigned short)62993;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
