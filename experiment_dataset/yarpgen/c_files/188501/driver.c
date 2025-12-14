#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17655;
unsigned int var_2 = 2023790397U;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)10065;
long long int var_6 = 4787596455738727549LL;
signed char var_8 = (signed char)-68;
short var_9 = (short)15390;
unsigned long long int var_10 = 15433917235240911888ULL;
int var_12 = -791378322;
unsigned long long int var_14 = 4457431056401149458ULL;
short var_16 = (short)-23007;
int zero = 0;
long long int var_17 = -3903553807074476415LL;
unsigned char var_18 = (unsigned char)179;
unsigned long long int var_19 = 10831206240275141321ULL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 144475216U;
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
