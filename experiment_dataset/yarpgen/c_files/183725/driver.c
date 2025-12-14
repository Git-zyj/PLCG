#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_5 = 1722309203;
long long int var_8 = 1699704001180887110LL;
unsigned short var_11 = (unsigned short)37353;
unsigned short var_13 = (unsigned short)21069;
unsigned short var_15 = (unsigned short)52079;
int zero = 0;
int var_18 = 757345742;
int var_19 = 843910297;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
