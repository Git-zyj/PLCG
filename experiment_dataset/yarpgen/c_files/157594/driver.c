#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_14 = (unsigned short)43937;
unsigned short var_17 = (unsigned short)13725;
signed char var_18 = (signed char)-34;
int zero = 0;
long long int var_19 = 1109191238132309122LL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)27772;
long long int var_22 = 7929085069379765884LL;
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
