#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8442213212623124535LL;
_Bool var_5 = (_Bool)1;
long long int var_7 = 6083675534858190774LL;
unsigned short var_8 = (unsigned short)44211;
unsigned char var_11 = (unsigned char)181;
int zero = 0;
unsigned int var_13 = 3659640562U;
unsigned int var_14 = 2205112168U;
void init() {
}

void checksum() {
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
