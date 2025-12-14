#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14610593955311060802ULL;
int var_2 = 25072330;
unsigned long long int var_5 = 8039507477123856500ULL;
unsigned long long int var_6 = 17961248954188284042ULL;
signed char var_7 = (signed char)-10;
unsigned char var_9 = (unsigned char)157;
unsigned int var_12 = 2673458127U;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 5016888582019689541ULL;
unsigned long long int var_17 = 6889211909782591469ULL;
unsigned long long int var_18 = 11914244014523951969ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
