#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 3288127777640797419LL;
signed char var_8 = (signed char)-39;
unsigned short var_11 = (unsigned short)62948;
int zero = 0;
unsigned int var_18 = 2701469771U;
unsigned int var_19 = 1899422209U;
unsigned int var_20 = 3005595727U;
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
