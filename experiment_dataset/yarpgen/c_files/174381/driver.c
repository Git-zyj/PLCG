#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)195;
int var_3 = -1647055930;
unsigned int var_5 = 3151380230U;
short var_8 = (short)-17666;
unsigned short var_11 = (unsigned short)21698;
int zero = 0;
int var_18 = -1878997382;
short var_19 = (short)-15797;
unsigned long long int var_20 = 2839363878374674687ULL;
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
