#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 218113271;
unsigned int var_4 = 2303138609U;
int var_5 = -1574086254;
unsigned int var_8 = 331545986U;
long long int var_10 = 8161808834654779106LL;
unsigned int var_13 = 4066863926U;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 755712044U;
int var_21 = 1430189895;
int var_22 = -766301935;
unsigned int var_23 = 614256551U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
