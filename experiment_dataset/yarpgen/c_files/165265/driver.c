#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1491638441196247873LL;
unsigned short var_4 = (unsigned short)48225;
unsigned int var_7 = 2119559001U;
signed char var_8 = (signed char)-120;
long long int var_9 = -4515914474011097106LL;
signed char var_10 = (signed char)54;
signed char var_12 = (signed char)64;
signed char var_13 = (signed char)-20;
int zero = 0;
unsigned int var_14 = 3649042578U;
int var_15 = 1729579918;
unsigned char var_16 = (unsigned char)3;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
