#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8040147792697674872ULL;
unsigned char var_4 = (unsigned char)181;
unsigned long long int var_6 = 1218527369919083236ULL;
signed char var_11 = (signed char)-49;
_Bool var_12 = (_Bool)1;
int var_15 = 73947630;
int zero = 0;
int var_18 = -2130246595;
unsigned int var_19 = 2305929674U;
void init() {
}

void checksum() {
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
