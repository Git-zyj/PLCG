#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-87;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 167922969U;
int var_8 = 1088811804;
unsigned short var_10 = (unsigned short)50361;
unsigned char var_12 = (unsigned char)43;
long long int var_14 = -4197090316956207700LL;
short var_16 = (short)23196;
int zero = 0;
unsigned long long int var_18 = 18323823345213924790ULL;
long long int var_19 = -8077676049962686114LL;
int var_20 = -457325805;
signed char var_21 = (signed char)115;
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
