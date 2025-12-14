#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -380856272663399487LL;
unsigned char var_5 = (unsigned char)46;
int var_6 = -879723352;
unsigned short var_10 = (unsigned short)31337;
long long int var_16 = -1724705191971766757LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_19 = -4965942067856417900LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
