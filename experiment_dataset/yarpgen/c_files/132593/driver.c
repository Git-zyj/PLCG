#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33357;
signed char var_1 = (signed char)-119;
int var_4 = 1793168412;
long long int var_6 = 3562415497147509055LL;
unsigned char var_7 = (unsigned char)68;
unsigned short var_8 = (unsigned short)34833;
int var_9 = -1666894260;
unsigned long long int var_13 = 16899215666179703672ULL;
int zero = 0;
int var_15 = 1206797300;
long long int var_16 = 1787896339105833527LL;
void init() {
}

void checksum() {
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
