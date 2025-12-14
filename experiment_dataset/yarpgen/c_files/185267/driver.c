#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5776064449397767822ULL;
_Bool var_1 = (_Bool)0;
short var_3 = (short)8010;
unsigned long long int var_7 = 13237524155546061830ULL;
unsigned int var_9 = 1004556391U;
int zero = 0;
unsigned short var_13 = (unsigned short)35295;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-26670;
void init() {
}

void checksum() {
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
