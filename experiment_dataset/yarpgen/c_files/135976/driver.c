#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7445785282290633104LL;
signed char var_3 = (signed char)-48;
unsigned short var_7 = (unsigned short)46916;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)50539;
signed char var_13 = (signed char)-19;
int zero = 0;
unsigned short var_14 = (unsigned short)62764;
unsigned short var_15 = (unsigned short)28967;
unsigned char var_16 = (unsigned char)247;
unsigned short var_17 = (unsigned short)19394;
unsigned long long int var_18 = 15518396823084677367ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
