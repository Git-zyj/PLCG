#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 341714500;
_Bool var_4 = (_Bool)0;
long long int var_5 = -7583590341224520510LL;
unsigned long long int var_7 = 5729353300006994826ULL;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)157;
unsigned long long int var_14 = 15831695806507985770ULL;
signed char var_15 = (signed char)8;
int zero = 0;
unsigned short var_17 = (unsigned short)49390;
unsigned int var_18 = 2198638703U;
signed char var_19 = (signed char)-101;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
