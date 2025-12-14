#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1223135686;
unsigned int var_11 = 2021914456U;
long long int var_12 = 2154169216829291923LL;
_Bool var_14 = (_Bool)0;
signed char var_16 = (signed char)-92;
int zero = 0;
unsigned long long int var_17 = 11932451739827621664ULL;
signed char var_18 = (signed char)-69;
signed char var_19 = (signed char)82;
long long int var_20 = -802806118449908656LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
