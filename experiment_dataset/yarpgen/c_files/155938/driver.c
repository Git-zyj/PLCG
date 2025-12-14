#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60998;
int var_2 = 1998006173;
unsigned int var_3 = 1215488285U;
int var_6 = 1940092663;
unsigned int var_7 = 3084326526U;
unsigned char var_10 = (unsigned char)175;
int zero = 0;
unsigned long long int var_17 = 11510502265729301983ULL;
unsigned char var_18 = (unsigned char)230;
short var_19 = (short)31441;
unsigned char var_20 = (unsigned char)9;
void init() {
}

void checksum() {
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
