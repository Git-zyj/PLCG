#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)142;
long long int var_2 = 8059607480442559512LL;
long long int var_4 = -8430306491042141875LL;
_Bool var_5 = (_Bool)0;
long long int var_6 = -5929355524403934756LL;
unsigned long long int var_7 = 2040434086041526021ULL;
int var_8 = 573655903;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 12396269023894625337ULL;
short var_11 = (short)26771;
int var_12 = 1588667739;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
