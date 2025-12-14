#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)82;
signed char var_3 = (signed char)-106;
unsigned char var_4 = (unsigned char)31;
signed char var_6 = (signed char)-6;
int var_7 = -326132773;
short var_11 = (short)9466;
unsigned long long int var_12 = 14484014593900845964ULL;
signed char var_16 = (signed char)38;
int zero = 0;
unsigned short var_18 = (unsigned short)7220;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)5670;
unsigned char var_21 = (unsigned char)54;
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
