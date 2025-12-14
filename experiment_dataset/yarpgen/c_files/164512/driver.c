#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8398103003120084359ULL;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 17068872094837547719ULL;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-86;
unsigned long long int var_15 = 1803385085754059591ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)212;
unsigned int var_21 = 304701682U;
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
