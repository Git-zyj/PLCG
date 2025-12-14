#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
long long int var_7 = -3919834663227084625LL;
unsigned int var_9 = 1441276265U;
_Bool var_11 = (_Bool)1;
long long int var_14 = 6249768853588209363LL;
int zero = 0;
unsigned int var_15 = 3173876475U;
short var_16 = (short)5590;
unsigned long long int var_17 = 4484836029681891471ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
