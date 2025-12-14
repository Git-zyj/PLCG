#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6297043967363551592ULL;
signed char var_5 = (signed char)2;
unsigned short var_7 = (unsigned short)3709;
unsigned long long int var_8 = 9119276146696743170ULL;
signed char var_9 = (signed char)-108;
short var_13 = (short)-7168;
int zero = 0;
unsigned short var_17 = (unsigned short)54428;
int var_18 = 907186700;
unsigned short var_19 = (unsigned short)27130;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
