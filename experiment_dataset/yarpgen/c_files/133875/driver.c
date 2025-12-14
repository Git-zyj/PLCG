#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3250134696U;
long long int var_1 = -8699820323562456835LL;
short var_2 = (short)24440;
long long int var_3 = 6678830768761897408LL;
_Bool var_4 = (_Bool)1;
long long int var_5 = 4530620096002874289LL;
unsigned short var_6 = (unsigned short)41312;
unsigned int var_7 = 3867535198U;
int zero = 0;
unsigned int var_10 = 1233951613U;
short var_11 = (short)6300;
long long int var_12 = -8690275422712338096LL;
unsigned long long int var_13 = 15156965863828730835ULL;
unsigned long long int var_14 = 14520979593851941568ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
