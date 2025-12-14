#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)51601;
_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)-121;
int var_11 = -1474722858;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 14123142925779695913ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = -1684034534;
unsigned int var_17 = 2125291073U;
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
