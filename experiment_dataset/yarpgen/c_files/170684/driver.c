#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6217274242159557488LL;
_Bool var_2 = (_Bool)1;
unsigned int var_5 = 2294011474U;
unsigned short var_6 = (unsigned short)46724;
unsigned short var_9 = (unsigned short)60472;
int var_11 = -1846231849;
int zero = 0;
int var_14 = -1597419871;
signed char var_15 = (signed char)118;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
