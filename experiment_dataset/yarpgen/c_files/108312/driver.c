#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37626;
int var_2 = -998650767;
signed char var_3 = (signed char)-31;
unsigned short var_7 = (unsigned short)11545;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-78;
unsigned char var_11 = (unsigned char)14;
unsigned long long int var_13 = 16227933991338089897ULL;
unsigned short var_14 = (unsigned short)19284;
int zero = 0;
signed char var_15 = (signed char)-62;
short var_16 = (short)16851;
unsigned int var_17 = 3544789473U;
unsigned char var_18 = (unsigned char)96;
void init() {
}

void checksum() {
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
