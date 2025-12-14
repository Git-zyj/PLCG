#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12401272031025786519ULL;
long long int var_4 = 15279552680955253LL;
unsigned char var_6 = (unsigned char)72;
_Bool var_9 = (_Bool)1;
short var_12 = (short)-4103;
unsigned int var_14 = 2453719901U;
unsigned short var_16 = (unsigned short)7559;
short var_17 = (short)12581;
int zero = 0;
unsigned char var_20 = (unsigned char)0;
long long int var_21 = 3538844939940920269LL;
void init() {
}

void checksum() {
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
