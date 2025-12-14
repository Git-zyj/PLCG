#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13523630620541776203ULL;
signed char var_1 = (signed char)99;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)99;
unsigned long long int var_12 = 10653391401282100117ULL;
unsigned short var_14 = (unsigned short)28467;
unsigned long long int var_19 = 17855356622453038220ULL;
int zero = 0;
int var_20 = -419252231;
int var_21 = -676757689;
unsigned int var_22 = 3872432372U;
unsigned int var_23 = 2306773137U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
