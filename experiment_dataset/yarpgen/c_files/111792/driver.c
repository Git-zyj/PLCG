#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3137573204957840174LL;
unsigned short var_2 = (unsigned short)26275;
_Bool var_5 = (_Bool)1;
unsigned short var_9 = (unsigned short)63260;
unsigned short var_11 = (unsigned short)25424;
unsigned long long int var_12 = 15173178167541181870ULL;
unsigned short var_14 = (unsigned short)7530;
int zero = 0;
unsigned long long int var_19 = 7312715198293194452ULL;
unsigned short var_20 = (unsigned short)12263;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)1628;
void init() {
}

void checksum() {
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
