#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)41;
unsigned char var_2 = (unsigned char)216;
unsigned long long int var_3 = 468857619458356683ULL;
unsigned short var_4 = (unsigned short)31603;
unsigned short var_5 = (unsigned short)63867;
short var_6 = (short)-5163;
int var_8 = -625363862;
unsigned int var_9 = 3601130888U;
unsigned short var_10 = (unsigned short)41851;
int var_11 = -1403566420;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-12;
unsigned long long int var_14 = 244061191805933708ULL;
int var_15 = 1169067727;
void init() {
}

void checksum() {
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
