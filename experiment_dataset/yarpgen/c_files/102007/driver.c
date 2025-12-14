#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 202007081U;
unsigned short var_3 = (unsigned short)33750;
unsigned short var_4 = (unsigned short)11313;
signed char var_5 = (signed char)-31;
unsigned int var_8 = 835969369U;
int var_9 = -1315523546;
unsigned short var_10 = (unsigned short)13905;
unsigned long long int var_12 = 13943316789514098638ULL;
unsigned char var_17 = (unsigned char)244;
int zero = 0;
signed char var_18 = (signed char)118;
int var_19 = -516154732;
unsigned int var_20 = 3876763575U;
unsigned long long int var_21 = 2414225123742691288ULL;
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
