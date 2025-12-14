#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)230;
unsigned long long int var_1 = 3529791125249183339ULL;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)9475;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)108;
long long int var_8 = 481140502866683418LL;
int var_9 = -1067077949;
signed char var_10 = (signed char)-83;
signed char var_11 = (signed char)-86;
unsigned short var_12 = (unsigned short)46183;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 3139530549U;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int var_17 = 1756585151;
short var_18 = (short)28329;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
