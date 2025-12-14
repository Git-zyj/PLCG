#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 17961812U;
int var_3 = -876828731;
long long int var_4 = 1756527229170871598LL;
unsigned short var_5 = (unsigned short)34954;
unsigned int var_6 = 1309536046U;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)6;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -2318626355591317610LL;
_Bool var_14 = (_Bool)1;
int var_15 = -1735347440;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
