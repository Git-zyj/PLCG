#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
unsigned int var_2 = 3541685910U;
long long int var_3 = -6672256702524661007LL;
unsigned long long int var_4 = 4446871212805451718ULL;
unsigned char var_8 = (unsigned char)95;
unsigned int var_9 = 671515942U;
int zero = 0;
short var_10 = (short)-24788;
unsigned int var_11 = 3336278429U;
unsigned short var_12 = (unsigned short)32147;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
