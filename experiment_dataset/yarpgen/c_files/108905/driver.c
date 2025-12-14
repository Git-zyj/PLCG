#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)3;
short var_7 = (short)2315;
long long int var_8 = 1236293195380694473LL;
unsigned long long int var_9 = 17886996659063994127ULL;
int var_14 = 457101860;
unsigned long long int var_15 = 6879561375020441579ULL;
int zero = 0;
long long int var_19 = 4812936234233770277LL;
signed char var_20 = (signed char)-40;
unsigned short var_21 = (unsigned short)40889;
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
