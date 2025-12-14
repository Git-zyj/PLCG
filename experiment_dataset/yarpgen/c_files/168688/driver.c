#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27865;
unsigned long long int var_3 = 1507518616044618873ULL;
_Bool var_6 = (_Bool)0;
short var_9 = (short)-894;
unsigned char var_15 = (unsigned char)83;
unsigned short var_16 = (unsigned short)13345;
int zero = 0;
short var_18 = (short)-27972;
int var_19 = 1944652389;
unsigned long long int var_20 = 10631103861035912070ULL;
unsigned long long int var_21 = 14741930221109098959ULL;
unsigned short var_22 = (unsigned short)48302;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
