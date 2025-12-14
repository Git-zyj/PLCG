#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1052079973;
long long int var_6 = 7884391703448210408LL;
signed char var_8 = (signed char)127;
short var_9 = (short)29161;
_Bool var_13 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 2727591956634603434ULL;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-121;
signed char var_22 = (signed char)-103;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
