#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1197076998U;
unsigned char var_7 = (unsigned char)110;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 17482453135072555138ULL;
short var_11 = (short)18641;
signed char var_14 = (signed char)-88;
int zero = 0;
int var_15 = 1996565217;
unsigned char var_16 = (unsigned char)163;
long long int var_17 = -5757373787248020994LL;
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
