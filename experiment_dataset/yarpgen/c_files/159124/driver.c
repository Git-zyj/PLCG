#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-77;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)46;
unsigned char var_10 = (unsigned char)100;
int zero = 0;
short var_11 = (short)-23757;
long long int var_12 = -2635342337622362887LL;
unsigned int var_13 = 3846776035U;
signed char var_14 = (signed char)-85;
short var_15 = (short)-29068;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
