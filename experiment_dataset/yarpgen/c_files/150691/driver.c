#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8517296587493190979LL;
signed char var_2 = (signed char)-56;
unsigned char var_6 = (unsigned char)159;
long long int var_8 = 4477673457742078093LL;
signed char var_11 = (signed char)106;
unsigned int var_13 = 1374961399U;
unsigned int var_18 = 2661817565U;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 2364134837515274504LL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 12447702495030828882ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
