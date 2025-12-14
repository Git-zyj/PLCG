#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-4444;
unsigned char var_9 = (unsigned char)56;
unsigned long long int var_12 = 5441851411326555566ULL;
unsigned long long int var_14 = 11234089471926067837ULL;
unsigned char var_15 = (unsigned char)67;
int zero = 0;
unsigned long long int var_17 = 13707525170427382591ULL;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 12107058195784470703ULL;
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
