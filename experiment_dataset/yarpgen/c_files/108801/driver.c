#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1619942065U;
unsigned int var_3 = 549628621U;
unsigned short var_4 = (unsigned short)25619;
unsigned int var_5 = 2983455259U;
unsigned short var_8 = (unsigned short)7840;
unsigned short var_9 = (unsigned short)50192;
unsigned short var_10 = (unsigned short)28277;
signed char var_11 = (signed char)23;
unsigned char var_13 = (unsigned char)163;
signed char var_14 = (signed char)12;
unsigned char var_16 = (unsigned char)131;
int zero = 0;
int var_17 = 214369350;
int var_18 = 132149050;
long long int var_19 = -7242996572681512980LL;
unsigned short var_20 = (unsigned short)50448;
unsigned char var_21 = (unsigned char)66;
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
