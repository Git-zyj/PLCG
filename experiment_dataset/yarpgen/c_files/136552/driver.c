#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7949214479137789066ULL;
signed char var_3 = (signed char)-93;
int var_4 = -897151986;
unsigned long long int var_5 = 17659924846148261026ULL;
short var_7 = (short)-19725;
unsigned char var_10 = (unsigned char)180;
int zero = 0;
unsigned short var_12 = (unsigned short)37742;
signed char var_13 = (signed char)88;
unsigned int var_14 = 3925165877U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
