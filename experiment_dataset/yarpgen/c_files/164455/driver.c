#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-44;
unsigned int var_1 = 323523110U;
unsigned int var_2 = 2889478481U;
short var_4 = (short)2690;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)41;
unsigned int var_10 = 4059462141U;
long long int var_11 = 7581694164659690723LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -8506028406962732425LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
