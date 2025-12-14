#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)133;
long long int var_1 = -7483184911869125141LL;
int var_2 = -249636180;
long long int var_8 = 8280329590029336587LL;
unsigned char var_10 = (unsigned char)36;
short var_12 = (short)6347;
unsigned short var_13 = (unsigned short)17637;
unsigned char var_14 = (unsigned char)78;
int zero = 0;
unsigned short var_16 = (unsigned short)30049;
unsigned long long int var_17 = 337526100837904207ULL;
int var_18 = 870145859;
unsigned short var_19 = (unsigned short)51776;
void init() {
}

void checksum() {
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
