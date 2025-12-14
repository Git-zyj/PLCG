#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13718488309210556771ULL;
_Bool var_3 = (_Bool)0;
int var_5 = 1642838416;
unsigned long long int var_6 = 6351206169206767144ULL;
long long int var_9 = 2179816525994831474LL;
unsigned char var_12 = (unsigned char)174;
int zero = 0;
int var_15 = -1633537307;
unsigned long long int var_16 = 11464987055059261859ULL;
unsigned char var_17 = (unsigned char)139;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
