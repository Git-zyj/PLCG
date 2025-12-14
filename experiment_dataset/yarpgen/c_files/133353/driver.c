#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15784242437998874561ULL;
unsigned long long int var_10 = 12717497944718971714ULL;
unsigned char var_13 = (unsigned char)235;
int var_17 = -2107729967;
int zero = 0;
signed char var_19 = (signed char)72;
unsigned short var_20 = (unsigned short)43873;
unsigned int var_21 = 1206358002U;
_Bool var_22 = (_Bool)1;
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
