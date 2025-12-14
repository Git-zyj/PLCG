#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1980382868;
long long int var_1 = -2170905408324510428LL;
unsigned char var_2 = (unsigned char)98;
unsigned long long int var_6 = 11140128692149373173ULL;
short var_7 = (short)17923;
short var_8 = (short)28265;
int var_9 = 757086402;
int zero = 0;
unsigned long long int var_10 = 4538380774047135116ULL;
short var_11 = (short)-16000;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
