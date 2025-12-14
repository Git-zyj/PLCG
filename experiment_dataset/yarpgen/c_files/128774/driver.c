#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11431057504752216844ULL;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)36;
unsigned int var_5 = 631925381U;
short var_8 = (short)31163;
long long int var_9 = -1780446303839317173LL;
unsigned char var_11 = (unsigned char)190;
signed char var_12 = (signed char)-91;
unsigned char var_13 = (unsigned char)205;
unsigned char var_15 = (unsigned char)119;
unsigned int var_16 = 3139650347U;
int zero = 0;
signed char var_18 = (signed char)70;
short var_19 = (short)-19706;
unsigned long long int var_20 = 5693027452911151552ULL;
unsigned int var_21 = 1070088890U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
