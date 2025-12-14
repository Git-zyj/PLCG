#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2014614860;
unsigned char var_5 = (unsigned char)139;
signed char var_6 = (signed char)69;
unsigned int var_7 = 1171905295U;
signed char var_9 = (signed char)-67;
long long int var_10 = 4774268421396005462LL;
signed char var_12 = (signed char)-88;
unsigned char var_13 = (unsigned char)12;
unsigned char var_14 = (unsigned char)99;
int zero = 0;
int var_16 = -1320890587;
long long int var_17 = -3579346810432735251LL;
unsigned long long int var_18 = 18187566224796093045ULL;
unsigned int var_19 = 4132593659U;
unsigned int var_20 = 3817695912U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
