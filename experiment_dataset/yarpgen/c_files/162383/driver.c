#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2872950288537164908LL;
unsigned char var_1 = (unsigned char)138;
unsigned int var_3 = 1668984376U;
int var_4 = -230282849;
unsigned short var_9 = (unsigned short)55429;
int zero = 0;
unsigned char var_10 = (unsigned char)19;
unsigned char var_11 = (unsigned char)63;
unsigned long long int var_12 = 2297478346416887831ULL;
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
