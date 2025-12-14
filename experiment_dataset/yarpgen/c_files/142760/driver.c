#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4596127582790493070LL;
unsigned short var_4 = (unsigned short)11513;
_Bool var_7 = (_Bool)0;
int var_8 = -136088871;
_Bool var_9 = (_Bool)1;
long long int var_10 = 1955403632234963801LL;
signed char var_11 = (signed char)50;
int zero = 0;
int var_13 = 1400148709;
unsigned short var_14 = (unsigned short)9776;
void init() {
}

void checksum() {
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
