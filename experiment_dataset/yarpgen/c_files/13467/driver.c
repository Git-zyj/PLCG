#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-15;
short var_6 = (short)18735;
long long int var_7 = 4995577743350528547LL;
unsigned long long int var_9 = 7856383237883475532ULL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_16 = 2556475608592550554ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)10493;
_Bool var_21 = (_Bool)1;
long long int var_22 = 2654581604523388853LL;
void init() {
}

void checksum() {
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
