#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
signed char var_8 = (signed char)19;
long long int var_10 = 3880938401444503659LL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-51;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 194126631616313830ULL;
int zero = 0;
unsigned long long int var_17 = 9129183394662832367ULL;
unsigned long long int var_18 = 5105704212728413643ULL;
void init() {
}

void checksum() {
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
