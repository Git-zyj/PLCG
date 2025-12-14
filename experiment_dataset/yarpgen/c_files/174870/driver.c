#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2001951725U;
unsigned int var_2 = 2853104709U;
signed char var_3 = (signed char)-11;
unsigned long long int var_5 = 11597984424994458503ULL;
signed char var_9 = (signed char)50;
unsigned char var_12 = (unsigned char)70;
unsigned long long int var_13 = 3724635158175943836ULL;
long long int var_15 = 7805767648872912594LL;
signed char var_16 = (signed char)-116;
short var_17 = (short)5895;
int zero = 0;
unsigned char var_18 = (unsigned char)255;
signed char var_19 = (signed char)30;
unsigned short var_20 = (unsigned short)36676;
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
