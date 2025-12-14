#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 239458835U;
signed char var_3 = (signed char)-24;
unsigned long long int var_4 = 18105264792826478142ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1126527117U;
int var_7 = 796587345;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_11 = 5012523403905201122LL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 59300999U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
