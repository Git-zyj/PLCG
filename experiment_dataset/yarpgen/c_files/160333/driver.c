#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)2841;
signed char var_4 = (signed char)24;
int var_5 = -1314878594;
unsigned char var_6 = (unsigned char)137;
_Bool var_9 = (_Bool)0;
unsigned short var_13 = (unsigned short)7791;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-59;
void init() {
}

void checksum() {
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
