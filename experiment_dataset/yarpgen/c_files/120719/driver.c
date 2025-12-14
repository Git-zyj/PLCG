#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)68;
signed char var_3 = (signed char)54;
long long int var_5 = -3863836533790152798LL;
unsigned int var_8 = 478867966U;
unsigned short var_9 = (unsigned short)5249;
unsigned long long int var_10 = 5064461173849956486ULL;
signed char var_11 = (signed char)-116;
unsigned short var_12 = (unsigned short)54579;
signed char var_15 = (signed char)-106;
signed char var_17 = (signed char)43;
int zero = 0;
long long int var_18 = 1965472067478375970LL;
unsigned short var_19 = (unsigned short)40106;
long long int var_20 = -2256414228404719895LL;
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
