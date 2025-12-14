#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_8 = 3653771546U;
_Bool var_10 = (_Bool)0;
long long int var_16 = 284164951110625750LL;
int zero = 0;
short var_18 = (short)25960;
unsigned long long int var_19 = 585431954139036991ULL;
unsigned long long int var_20 = 10832079629402614176ULL;
unsigned int var_21 = 1022052839U;
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
