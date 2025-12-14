#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1872856247U;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 2601890516U;
int zero = 0;
unsigned long long int var_18 = 14154707017796916869ULL;
_Bool var_19 = (_Bool)0;
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
