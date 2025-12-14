#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-59;
int var_1 = 1037814197;
long long int var_3 = -7179586419287391694LL;
short var_5 = (short)10052;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)57856;
long long int var_9 = -4255567341485260226LL;
int zero = 0;
long long int var_11 = 3725701645095390451LL;
short var_12 = (short)16683;
int var_13 = 904776548;
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
