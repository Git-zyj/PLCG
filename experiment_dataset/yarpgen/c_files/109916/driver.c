#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)25409;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)1;
unsigned int var_10 = 398942370U;
int zero = 0;
signed char var_11 = (signed char)27;
signed char var_12 = (signed char)-58;
int var_13 = 630926827;
long long int var_14 = -8582900645007153184LL;
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
