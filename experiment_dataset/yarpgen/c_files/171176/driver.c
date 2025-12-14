#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-12;
unsigned short var_2 = (unsigned short)45032;
signed char var_3 = (signed char)-123;
unsigned short var_4 = (unsigned short)64488;
int var_5 = 1411943924;
unsigned short var_6 = (unsigned short)21072;
signed char var_7 = (signed char)-17;
short var_8 = (short)9133;
unsigned short var_9 = (unsigned short)10212;
signed char var_10 = (signed char)31;
signed char var_13 = (signed char)5;
unsigned short var_15 = (unsigned short)30705;
int zero = 0;
unsigned long long int var_16 = 14839251508189833496ULL;
signed char var_17 = (signed char)-91;
long long int var_18 = 3618574742410380829LL;
unsigned int var_19 = 2519287171U;
unsigned char var_20 = (unsigned char)146;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
