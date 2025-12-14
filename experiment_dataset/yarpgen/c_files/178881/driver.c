#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 352615372;
unsigned short var_2 = (unsigned short)1085;
int var_3 = 621530585;
signed char var_4 = (signed char)116;
int var_7 = 1131987694;
short var_8 = (short)-3921;
short var_9 = (short)24868;
short var_11 = (short)-27460;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_20 = -3334451140485305743LL;
short var_21 = (short)-14264;
short var_22 = (short)-32475;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
