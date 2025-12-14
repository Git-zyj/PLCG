#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4609627172800413360ULL;
long long int var_1 = -3323874499922577923LL;
signed char var_2 = (signed char)-17;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-10734;
long long int var_7 = 815424885729509780LL;
int var_8 = -1362548662;
long long int var_9 = -3842164436250277510LL;
short var_10 = (short)21845;
int zero = 0;
short var_11 = (short)-32378;
unsigned char var_12 = (unsigned char)66;
short var_13 = (short)15775;
short var_14 = (short)-20795;
unsigned long long int var_15 = 13413097786576747220ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
