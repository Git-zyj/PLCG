#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1307130347;
short var_7 = (short)19383;
unsigned short var_8 = (unsigned short)31735;
signed char var_9 = (signed char)54;
int var_10 = -777094406;
unsigned char var_14 = (unsigned char)15;
unsigned char var_15 = (unsigned char)148;
unsigned short var_16 = (unsigned short)63074;
unsigned char var_17 = (unsigned char)150;
int var_19 = -1580957259;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)204;
int var_22 = 632873934;
short var_23 = (short)32333;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
