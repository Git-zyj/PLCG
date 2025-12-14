#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = 1393717247;
short var_6 = (short)20815;
unsigned int var_7 = 64663627U;
unsigned short var_10 = (unsigned short)41839;
int zero = 0;
unsigned short var_11 = (unsigned short)32067;
unsigned long long int var_12 = 12117140327945530145ULL;
int var_13 = -252995105;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
