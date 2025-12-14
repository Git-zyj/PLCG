#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45151;
unsigned short var_2 = (unsigned short)22296;
int var_4 = 1213926575;
int var_8 = 441490933;
int var_9 = 1172661960;
unsigned short var_12 = (unsigned short)60459;
int var_13 = -445859147;
short var_14 = (short)15584;
unsigned long long int var_15 = 15017820646959569117ULL;
unsigned long long int var_18 = 3884244933629629960ULL;
int zero = 0;
int var_20 = -1680013363;
short var_21 = (short)-3851;
short var_22 = (short)6920;
unsigned short var_23 = (unsigned short)4400;
unsigned short var_24 = (unsigned short)10950;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
