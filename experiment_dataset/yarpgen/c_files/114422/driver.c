#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)178;
int var_3 = 1581708413;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
long long int var_15 = 622243105260319719LL;
long long int var_18 = -105035595047719115LL;
int zero = 0;
short var_20 = (short)23919;
unsigned int var_21 = 4154714599U;
long long int var_22 = -2766327089638331LL;
unsigned long long int var_23 = 16004574913150681167ULL;
void init() {
}

void checksum() {
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
