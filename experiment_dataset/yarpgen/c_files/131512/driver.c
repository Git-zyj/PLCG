#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3465;
long long int var_9 = 6409714112818292041LL;
signed char var_13 = (signed char)-27;
int zero = 0;
int var_17 = 351646519;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-24063;
long long int var_20 = -2610998305451811077LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
