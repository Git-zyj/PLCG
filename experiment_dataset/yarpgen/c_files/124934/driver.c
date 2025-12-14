#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3302244026U;
unsigned short var_2 = (unsigned short)49019;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
int var_6 = -2056979272;
unsigned int var_9 = 643654350U;
signed char var_13 = (signed char)113;
unsigned short var_14 = (unsigned short)28444;
int zero = 0;
unsigned short var_17 = (unsigned short)40567;
int var_18 = -809888527;
signed char var_19 = (signed char)58;
_Bool var_20 = (_Bool)0;
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
