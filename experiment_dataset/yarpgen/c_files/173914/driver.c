#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25439;
int var_3 = -2057118663;
unsigned long long int var_12 = 15194715807867544145ULL;
unsigned char var_14 = (unsigned char)213;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-69;
short var_20 = (short)28307;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
