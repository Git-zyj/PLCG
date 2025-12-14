#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
long long int var_4 = -2321553917532718252LL;
long long int var_5 = 3823877432044966232LL;
_Bool var_6 = (_Bool)1;
int var_7 = -116369660;
int var_8 = -1093401165;
unsigned short var_9 = (unsigned short)1151;
int zero = 0;
int var_10 = -1091303709;
_Bool var_11 = (_Bool)1;
long long int var_12 = -2931096921420691652LL;
_Bool var_13 = (_Bool)0;
int var_14 = 1081333558;
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
