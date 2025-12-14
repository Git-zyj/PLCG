#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7730294196144352320ULL;
unsigned int var_7 = 1183192295U;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 367665604U;
unsigned short var_11 = (unsigned short)43035;
signed char var_15 = (signed char)-18;
int zero = 0;
short var_18 = (short)18871;
short var_19 = (short)28837;
short var_20 = (short)-553;
signed char var_21 = (signed char)-60;
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
