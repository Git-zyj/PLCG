#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2000358837;
unsigned int var_1 = 3347213798U;
signed char var_3 = (signed char)-19;
long long int var_9 = 8714195740079041588LL;
int zero = 0;
long long int var_18 = 1338423592871465402LL;
unsigned long long int var_19 = 837177163721211604ULL;
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
