#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30523;
unsigned char var_1 = (unsigned char)68;
long long int var_2 = -3139814828313297870LL;
int var_3 = 1592880065;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 769332954U;
unsigned int var_7 = 3402553114U;
short var_9 = (short)2355;
unsigned int var_12 = 1241856571U;
_Bool var_13 = (_Bool)0;
int var_16 = -439142507;
unsigned char var_17 = (unsigned char)125;
int zero = 0;
signed char var_18 = (signed char)43;
signed char var_19 = (signed char)80;
unsigned char var_20 = (unsigned char)173;
unsigned char var_21 = (unsigned char)146;
unsigned char var_22 = (unsigned char)85;
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
