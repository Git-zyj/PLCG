#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-61;
unsigned char var_2 = (unsigned char)6;
_Bool var_3 = (_Bool)1;
long long int var_4 = -5826043997257402574LL;
signed char var_6 = (signed char)67;
unsigned long long int var_7 = 9512305633513815114ULL;
unsigned char var_8 = (unsigned char)104;
unsigned int var_11 = 2672818209U;
int var_12 = 1489580614;
unsigned int var_13 = 506270061U;
int zero = 0;
unsigned short var_14 = (unsigned short)56466;
unsigned long long int var_15 = 15510912582527844278ULL;
void init() {
}

void checksum() {
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
