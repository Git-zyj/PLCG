#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2874115654575365505LL;
unsigned char var_10 = (unsigned char)174;
int var_12 = 273409118;
unsigned char var_13 = (unsigned char)5;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-80;
unsigned char var_20 = (unsigned char)62;
int var_21 = 1488301473;
long long int var_22 = -5073224341171021256LL;
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
