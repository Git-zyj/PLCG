#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)50;
long long int var_4 = 6396574899872479864LL;
unsigned short var_9 = (unsigned short)7403;
unsigned char var_17 = (unsigned char)108;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_19 = 7906131881262666514LL;
signed char var_20 = (signed char)45;
signed char var_21 = (signed char)33;
unsigned char var_22 = (unsigned char)178;
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
