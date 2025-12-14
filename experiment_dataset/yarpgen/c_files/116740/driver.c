#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 4109551118U;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)36804;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 15245135565356783480ULL;
unsigned long long int var_20 = 18198091671733605609ULL;
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
