#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2868660039485882213ULL;
unsigned long long int var_5 = 12529772772833615980ULL;
long long int var_6 = 7307569210956771393LL;
_Bool var_8 = (_Bool)1;
long long int var_10 = -4318651681363475840LL;
short var_11 = (short)-31165;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3807398062U;
long long int var_15 = 5154269129427372589LL;
unsigned int var_16 = 526593091U;
int zero = 0;
unsigned char var_17 = (unsigned char)244;
short var_18 = (short)14816;
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
