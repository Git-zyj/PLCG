#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13256;
_Bool var_9 = (_Bool)1;
int var_11 = -1442004778;
long long int var_12 = -8921642268859028994LL;
unsigned int var_14 = 205056487U;
long long int var_15 = -5462242366105742768LL;
signed char var_17 = (signed char)78;
int zero = 0;
unsigned long long int var_18 = 1067377279193395634ULL;
unsigned long long int var_19 = 14857002439525418224ULL;
_Bool var_20 = (_Bool)0;
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
