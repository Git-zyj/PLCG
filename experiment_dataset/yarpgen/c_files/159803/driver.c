#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2554443733U;
unsigned short var_4 = (unsigned short)57584;
short var_5 = (short)32650;
unsigned long long int var_8 = 18390617296346881377ULL;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1674077618U;
unsigned short var_13 = (unsigned short)40519;
int zero = 0;
unsigned char var_17 = (unsigned char)59;
long long int var_18 = 3898694139608431847LL;
unsigned int var_19 = 4045920361U;
unsigned short var_20 = (unsigned short)14125;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
