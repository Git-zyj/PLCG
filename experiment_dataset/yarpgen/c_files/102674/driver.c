#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12856;
long long int var_3 = 3021560403659348694LL;
_Bool var_4 = (_Bool)0;
long long int var_8 = 5249741109529078888LL;
long long int var_11 = -4245806100122151002LL;
long long int var_15 = 3006491954237797254LL;
int zero = 0;
long long int var_20 = 937292506857678994LL;
_Bool var_21 = (_Bool)1;
long long int var_22 = -872575915683878007LL;
unsigned int var_23 = 2480442073U;
void init() {
}

void checksum() {
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
