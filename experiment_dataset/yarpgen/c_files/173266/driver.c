#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-108;
unsigned short var_9 = (unsigned short)11310;
int var_11 = 1920918932;
unsigned short var_12 = (unsigned short)59091;
unsigned short var_15 = (unsigned short)50190;
long long int var_16 = 8054162751676108620LL;
int zero = 0;
unsigned short var_19 = (unsigned short)1013;
unsigned int var_20 = 2125987552U;
_Bool var_21 = (_Bool)0;
int var_22 = 2119420616;
unsigned int var_23 = 507061027U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
