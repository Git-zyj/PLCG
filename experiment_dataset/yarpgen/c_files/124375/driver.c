#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5118147453263932135LL;
unsigned int var_1 = 2515945704U;
long long int var_2 = 1923539197550310954LL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)15919;
unsigned int var_6 = 4139953334U;
unsigned int var_11 = 2757712790U;
unsigned int var_12 = 3971592484U;
unsigned short var_13 = (unsigned short)4041;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3428753506U;
unsigned int var_16 = 2220791991U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
