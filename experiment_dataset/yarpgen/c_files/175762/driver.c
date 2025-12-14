#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)104;
short var_1 = (short)31794;
signed char var_4 = (signed char)-80;
int var_6 = 1541584842;
short var_8 = (short)1625;
unsigned char var_10 = (unsigned char)138;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3028856898U;
signed char var_16 = (signed char)56;
int zero = 0;
signed char var_18 = (signed char)63;
unsigned char var_19 = (unsigned char)184;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
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
