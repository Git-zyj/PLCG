#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_4 = 12434068369091644830ULL;
signed char var_6 = (signed char)-20;
unsigned int var_7 = 44284199U;
unsigned long long int var_8 = 975052874706252569ULL;
long long int var_9 = 1757697757770482131LL;
_Bool var_13 = (_Bool)0;
short var_15 = (short)19470;
unsigned int var_17 = 113274530U;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 18092427314172441184ULL;
int var_21 = -959079727;
long long int var_22 = 558798708028680350LL;
signed char var_23 = (signed char)-4;
unsigned char var_24 = (unsigned char)84;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
