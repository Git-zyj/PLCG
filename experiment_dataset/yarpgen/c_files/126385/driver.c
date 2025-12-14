#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13222836503585469641ULL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-18;
long long int var_7 = 8661037870081081797LL;
int var_12 = 780252480;
unsigned int var_17 = 4163542283U;
int zero = 0;
long long int var_19 = -5783515473858107748LL;
long long int var_20 = -5816205141054573467LL;
long long int var_21 = 2318533238905610237LL;
signed char var_22 = (signed char)18;
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
