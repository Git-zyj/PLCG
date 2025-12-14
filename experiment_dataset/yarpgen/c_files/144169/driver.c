#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -936706709;
unsigned short var_2 = (unsigned short)12391;
long long int var_10 = 9179927734676991537LL;
long long int var_14 = 3888493867669871519LL;
unsigned long long int var_15 = 12182894161535747436ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_20 = -1203306014349686274LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
