#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2504573561839978355ULL;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-10454;
unsigned int var_4 = 3041065890U;
unsigned long long int var_5 = 5226445464316414923ULL;
int var_6 = 79301606;
int var_7 = -1049083747;
int var_8 = -388260186;
short var_9 = (short)-17036;
_Bool var_10 = (_Bool)1;
short var_13 = (short)29165;
int var_14 = 2023879;
unsigned short var_15 = (unsigned short)52868;
unsigned int var_16 = 1900901072U;
unsigned long long int var_17 = 1699232757762113527ULL;
int zero = 0;
signed char var_18 = (signed char)74;
signed char var_19 = (signed char)-78;
void init() {
}

void checksum() {
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
