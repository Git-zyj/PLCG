#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7098424892828081896LL;
_Bool var_5 = (_Bool)1;
int var_7 = 1149020583;
unsigned long long int var_15 = 7858539063527080775ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)3638;
int zero = 0;
short var_18 = (short)16449;
int var_19 = 860390454;
int var_20 = -429527952;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
