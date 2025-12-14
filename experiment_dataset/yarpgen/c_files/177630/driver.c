#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 288567518;
unsigned int var_3 = 180703745U;
int var_4 = 1676486925;
unsigned long long int var_5 = 14681592527636075250ULL;
int zero = 0;
short var_12 = (short)2202;
unsigned char var_13 = (unsigned char)211;
long long int var_14 = 1206083157587537262LL;
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
