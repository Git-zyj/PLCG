#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3292386080081997810LL;
_Bool var_3 = (_Bool)1;
long long int var_5 = 1895897769603725043LL;
long long int var_6 = 6965338504290634605LL;
long long int var_7 = 8236669694121654075LL;
long long int var_8 = -908446511928120708LL;
long long int var_9 = -1574024001935353210LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = -3739778253902955453LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
