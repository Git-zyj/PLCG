#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)159;
_Bool var_2 = (_Bool)1;
unsigned long long int var_5 = 11597346114765692737ULL;
unsigned short var_7 = (unsigned short)4682;
unsigned int var_10 = 3625736862U;
int zero = 0;
unsigned short var_13 = (unsigned short)50802;
unsigned char var_14 = (unsigned char)155;
_Bool var_15 = (_Bool)0;
int var_16 = -1054090267;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
