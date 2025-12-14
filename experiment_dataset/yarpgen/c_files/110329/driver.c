#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3912975347197489036LL;
int var_4 = 1941152069;
long long int var_6 = -3635069282889005998LL;
long long int var_7 = -3634627681557779367LL;
_Bool var_9 = (_Bool)1;
long long int var_11 = -6277866611909437860LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3157514356U;
void init() {
}

void checksum() {
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
