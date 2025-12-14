#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-52;
unsigned char var_1 = (unsigned char)70;
short var_2 = (short)18670;
unsigned char var_4 = (unsigned char)216;
unsigned char var_5 = (unsigned char)233;
int var_6 = -312872426;
unsigned char var_7 = (unsigned char)117;
unsigned int var_8 = 1372112515U;
unsigned char var_10 = (unsigned char)103;
int zero = 0;
unsigned int var_11 = 1146050172U;
signed char var_12 = (signed char)-103;
signed char var_13 = (signed char)-24;
long long int var_14 = -7226208636518264520LL;
_Bool var_15 = (_Bool)1;
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
