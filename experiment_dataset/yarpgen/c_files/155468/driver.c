#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6064732445815145435LL;
unsigned char var_2 = (unsigned char)155;
unsigned long long int var_3 = 10195816007859671954ULL;
int var_6 = 623806849;
unsigned int var_7 = 2609336709U;
unsigned char var_9 = (unsigned char)252;
signed char var_10 = (signed char)58;
int var_11 = -1209038872;
unsigned long long int var_13 = 9262591232956164091ULL;
unsigned char var_14 = (unsigned char)95;
int zero = 0;
unsigned int var_16 = 2078734773U;
long long int var_17 = 4786828283914728369LL;
unsigned int var_18 = 1197784805U;
unsigned short var_19 = (unsigned short)36993;
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
