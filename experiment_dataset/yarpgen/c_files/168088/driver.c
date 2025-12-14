#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1414889040616621690ULL;
_Bool var_2 = (_Bool)1;
int var_4 = 909116212;
long long int var_5 = 4651507387850410216LL;
long long int var_7 = 7684431321209129102LL;
_Bool var_8 = (_Bool)1;
signed char var_11 = (signed char)13;
long long int var_16 = 2415485736186354690LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_18 = 4873223838532307009LL;
signed char var_19 = (signed char)100;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
