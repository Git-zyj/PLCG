#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2343460308U;
unsigned short var_1 = (unsigned short)7002;
long long int var_3 = -332515421655373395LL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-29;
unsigned char var_11 = (unsigned char)14;
unsigned long long int var_12 = 8409974291574896487ULL;
int var_13 = 753174766;
short var_14 = (short)13600;
unsigned short var_15 = (unsigned short)61417;
int var_17 = -529283806;
int zero = 0;
signed char var_19 = (signed char)-103;
long long int var_20 = -1527687519429438934LL;
unsigned char var_21 = (unsigned char)30;
void init() {
}

void checksum() {
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
