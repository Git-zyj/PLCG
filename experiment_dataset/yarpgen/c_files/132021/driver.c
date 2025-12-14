#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23554;
unsigned long long int var_1 = 6549936231479504079ULL;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2308893968U;
unsigned short var_8 = (unsigned short)11976;
int var_9 = -1000280067;
int zero = 0;
unsigned short var_12 = (unsigned short)47006;
unsigned short var_13 = (unsigned short)9537;
unsigned short var_14 = (unsigned short)34481;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
