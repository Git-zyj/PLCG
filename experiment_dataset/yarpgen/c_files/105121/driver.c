#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -951824916;
signed char var_8 = (signed char)93;
signed char var_9 = (signed char)-27;
signed char var_12 = (signed char)-49;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-87;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-35;
signed char var_21 = (signed char)12;
unsigned int var_22 = 650625542U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
