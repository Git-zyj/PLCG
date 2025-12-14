#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1500881912;
unsigned int var_3 = 1313598388U;
signed char var_4 = (signed char)-108;
unsigned long long int var_6 = 17258098938774003439ULL;
int var_8 = -1623035684;
unsigned int var_9 = 840698295U;
int zero = 0;
short var_12 = (short)-26398;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3314406996U;
int var_15 = 3376314;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
