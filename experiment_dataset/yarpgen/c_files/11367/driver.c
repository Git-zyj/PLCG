#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13615;
signed char var_3 = (signed char)-5;
long long int var_8 = -2628820363266435905LL;
short var_9 = (short)-29366;
long long int var_10 = -1994432148614974646LL;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int var_13 = 954528709;
unsigned int var_15 = 2819271095U;
int zero = 0;
unsigned long long int var_16 = 7560953702897290442ULL;
unsigned short var_17 = (unsigned short)41765;
unsigned long long int var_18 = 12315138431155501338ULL;
void init() {
}

void checksum() {
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
