#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49026;
unsigned long long int var_3 = 3098201240139710072ULL;
unsigned int var_4 = 1271538136U;
int var_5 = -2045354153;
short var_8 = (short)-4620;
unsigned short var_9 = (unsigned short)26795;
unsigned short var_10 = (unsigned short)22553;
int var_11 = 1071047131;
unsigned char var_12 = (unsigned char)24;
unsigned char var_13 = (unsigned char)116;
int zero = 0;
unsigned short var_16 = (unsigned short)58198;
unsigned short var_17 = (unsigned short)50757;
unsigned char var_18 = (unsigned char)183;
short var_19 = (short)5264;
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
