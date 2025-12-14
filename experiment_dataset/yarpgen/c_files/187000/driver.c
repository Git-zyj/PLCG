#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3183502642U;
unsigned long long int var_2 = 11856190386416783558ULL;
signed char var_4 = (signed char)-4;
unsigned char var_9 = (unsigned char)87;
unsigned short var_11 = (unsigned short)60632;
signed char var_12 = (signed char)-111;
unsigned long long int var_13 = 15762190287972843777ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)172;
unsigned short var_19 = (unsigned short)33895;
unsigned int var_20 = 3660959605U;
short var_21 = (short)2931;
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
