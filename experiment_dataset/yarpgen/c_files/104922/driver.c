#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)40;
short var_6 = (short)4579;
unsigned long long int var_8 = 12987186038231881283ULL;
unsigned char var_11 = (unsigned char)221;
unsigned short var_13 = (unsigned short)9085;
signed char var_14 = (signed char)110;
unsigned char var_16 = (unsigned char)208;
unsigned long long int var_17 = 6064271137889090964ULL;
unsigned int var_18 = 3654659095U;
int zero = 0;
unsigned char var_19 = (unsigned char)111;
unsigned short var_20 = (unsigned short)39748;
unsigned long long int var_21 = 8698979429283720557ULL;
unsigned short var_22 = (unsigned short)2413;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
