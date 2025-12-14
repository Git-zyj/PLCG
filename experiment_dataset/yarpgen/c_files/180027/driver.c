#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17030300216185868821ULL;
unsigned long long int var_1 = 11827623297629603058ULL;
unsigned char var_3 = (unsigned char)5;
_Bool var_4 = (_Bool)1;
long long int var_5 = -4112224531742929108LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 6053957961344163669ULL;
unsigned int var_8 = 2073034590U;
int zero = 0;
unsigned long long int var_10 = 11892097438092798104ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 16705683608083539514ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
