#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2332252703U;
unsigned long long int var_5 = 14266252877003556033ULL;
unsigned int var_6 = 1924853869U;
short var_7 = (short)30566;
unsigned short var_10 = (unsigned short)25877;
int zero = 0;
unsigned char var_16 = (unsigned char)14;
signed char var_17 = (signed char)-19;
unsigned long long int var_18 = 15536416075700158990ULL;
unsigned short var_19 = (unsigned short)58231;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
