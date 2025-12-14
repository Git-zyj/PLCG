#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6832320416792000513LL;
signed char var_2 = (signed char)-100;
unsigned int var_3 = 2145742737U;
unsigned int var_4 = 324644605U;
signed char var_7 = (signed char)50;
signed char var_9 = (signed char)66;
unsigned int var_10 = 190493483U;
signed char var_11 = (signed char)-80;
long long int var_12 = 5084639577279557639LL;
signed char var_13 = (signed char)47;
int zero = 0;
long long int var_16 = -2213456871749738612LL;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1034572925U;
signed char var_19 = (signed char)99;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
