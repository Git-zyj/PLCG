#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-24;
signed char var_5 = (signed char)1;
signed char var_6 = (signed char)27;
int var_7 = -1946677573;
unsigned int var_9 = 4226179200U;
unsigned long long int var_14 = 2106641541124183703ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -6960204846354751815LL;
signed char var_18 = (signed char)119;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
