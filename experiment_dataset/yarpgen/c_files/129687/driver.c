#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)52217;
int var_5 = 1058675009;
int var_6 = 1457640451;
int var_9 = 1080716734;
signed char var_10 = (signed char)60;
int var_11 = 1136160621;
unsigned short var_12 = (unsigned short)39460;
int var_13 = -1863967900;
unsigned char var_14 = (unsigned char)217;
int zero = 0;
short var_15 = (short)31503;
int var_16 = -524956234;
unsigned char var_17 = (unsigned char)44;
unsigned char var_18 = (unsigned char)168;
unsigned short var_19 = (unsigned short)40541;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
