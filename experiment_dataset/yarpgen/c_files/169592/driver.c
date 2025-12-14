#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)59;
long long int var_1 = -8876973684492383706LL;
int var_5 = 2121674438;
unsigned long long int var_9 = 1117847085631310652ULL;
unsigned long long int var_10 = 3071808937016746543ULL;
signed char var_12 = (signed char)-42;
unsigned int var_16 = 3685548877U;
unsigned int var_17 = 2366070580U;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -9107319868902082085LL;
short var_21 = (short)-29644;
signed char var_22 = (signed char)-126;
unsigned int var_23 = 2671623787U;
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
