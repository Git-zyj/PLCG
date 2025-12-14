#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 350831428U;
long long int var_2 = 1432805041369628391LL;
int var_3 = 1417680703;
long long int var_4 = -9171300706060373661LL;
unsigned int var_5 = 1128285381U;
long long int var_6 = 5636274259355936330LL;
unsigned char var_7 = (unsigned char)243;
unsigned short var_8 = (unsigned short)43384;
long long int var_10 = -816702370156242101LL;
unsigned short var_11 = (unsigned short)4354;
int zero = 0;
unsigned long long int var_13 = 17639393902900085187ULL;
unsigned int var_14 = 2665621282U;
long long int var_15 = 5043727281684655594LL;
int var_16 = 304538173;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
