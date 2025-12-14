#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1181443709;
unsigned char var_4 = (unsigned char)164;
short var_5 = (short)16520;
unsigned char var_6 = (unsigned char)130;
unsigned char var_7 = (unsigned char)53;
unsigned long long int var_8 = 3323018031479977666ULL;
signed char var_11 = (signed char)95;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)23922;
long long int var_14 = 5055882543130581309LL;
unsigned int var_15 = 448015496U;
void init() {
}

void checksum() {
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
