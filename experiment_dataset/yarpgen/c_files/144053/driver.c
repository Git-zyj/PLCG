#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 643377580U;
short var_2 = (short)-4468;
long long int var_3 = 6329503311360311974LL;
unsigned int var_9 = 2461347527U;
signed char var_10 = (signed char)-1;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 10881983562590698722ULL;
unsigned int var_13 = 2112668265U;
signed char var_14 = (signed char)-24;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
