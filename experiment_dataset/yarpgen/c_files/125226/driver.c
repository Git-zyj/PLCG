#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3145433911719878389LL;
unsigned char var_2 = (unsigned char)175;
unsigned short var_5 = (unsigned short)40442;
unsigned long long int var_7 = 15514491036728856618ULL;
unsigned char var_8 = (unsigned char)186;
unsigned int var_13 = 2508083903U;
long long int var_15 = -3750272326505524401LL;
unsigned char var_16 = (unsigned char)218;
int zero = 0;
short var_18 = (short)2637;
long long int var_19 = -7620125226471073214LL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)58910;
unsigned short var_22 = (unsigned short)19428;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
