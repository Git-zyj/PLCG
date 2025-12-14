#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-114;
_Bool var_9 = (_Bool)1;
long long int var_14 = 3139993475870490227LL;
unsigned char var_15 = (unsigned char)94;
int zero = 0;
signed char var_16 = (signed char)6;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-50;
long long int var_19 = -1811229329154510229LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
