#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24018;
int var_1 = 23007380;
long long int var_2 = -4649167191063801147LL;
long long int var_3 = -3308187316371650647LL;
long long int var_9 = 399517254785069678LL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)35440;
int var_12 = 764126361;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)203;
int var_16 = 1357111525;
unsigned short var_19 = (unsigned short)4224;
int zero = 0;
int var_20 = 219336732;
short var_21 = (short)-31219;
unsigned int var_22 = 3052313591U;
unsigned char var_23 = (unsigned char)104;
short var_24 = (short)10691;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
