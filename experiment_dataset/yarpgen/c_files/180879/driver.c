#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25633;
_Bool var_5 = (_Bool)0;
long long int var_7 = -7724820815134077606LL;
unsigned long long int var_8 = 7925857936978048845ULL;
unsigned char var_9 = (unsigned char)136;
unsigned int var_10 = 2540947075U;
int zero = 0;
unsigned short var_12 = (unsigned short)10809;
unsigned long long int var_13 = 10920118331397650265ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
