#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2054183580U;
unsigned long long int var_2 = 6141026624547861405ULL;
int var_4 = -87095282;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-112;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 522162061U;
_Bool var_12 = (_Bool)0;
int var_13 = 1414999463;
int zero = 0;
unsigned long long int var_15 = 10368065917773548766ULL;
unsigned char var_16 = (unsigned char)250;
unsigned int var_17 = 4002215347U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
