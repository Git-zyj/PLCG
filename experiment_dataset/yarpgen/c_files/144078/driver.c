#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61760;
signed char var_3 = (signed char)-108;
unsigned int var_8 = 1573444375U;
unsigned long long int var_9 = 10782394565621114492ULL;
unsigned long long int var_10 = 14397401430294129119ULL;
unsigned short var_11 = (unsigned short)63197;
unsigned char var_15 = (unsigned char)50;
long long int var_16 = 2292030310004964918LL;
int zero = 0;
signed char var_18 = (signed char)33;
int var_19 = -1456540378;
signed char var_20 = (signed char)-41;
unsigned int var_21 = 2731953718U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
