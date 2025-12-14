#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)209;
unsigned char var_2 = (unsigned char)203;
signed char var_5 = (signed char)-57;
_Bool var_7 = (_Bool)1;
short var_9 = (short)-25579;
long long int var_12 = 2182639990283616607LL;
unsigned int var_13 = 111261943U;
_Bool var_14 = (_Bool)0;
int var_16 = -924992787;
int zero = 0;
long long int var_17 = 4837578322443095370LL;
int var_18 = -349508318;
int var_19 = 1482972012;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
