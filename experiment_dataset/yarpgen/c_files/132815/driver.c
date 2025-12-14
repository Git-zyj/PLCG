#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4658227468283909378ULL;
unsigned long long int var_2 = 15207351078517964320ULL;
unsigned short var_4 = (unsigned short)28102;
short var_5 = (short)18329;
unsigned short var_6 = (unsigned short)51706;
long long int var_8 = -235047834632234067LL;
unsigned short var_9 = (unsigned short)9806;
int zero = 0;
unsigned long long int var_10 = 8590941500146533095ULL;
unsigned int var_11 = 2080746550U;
unsigned long long int var_12 = 8845794076826853355ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
