#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18231331332879102838ULL;
unsigned long long int var_10 = 5438175378997961705ULL;
unsigned int var_12 = 1919323193U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1032852008U;
void init() {
}

void checksum() {
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
