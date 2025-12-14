#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 5675803774728038963LL;
unsigned char var_3 = (unsigned char)210;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_11 = (unsigned short)26820;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 742649906U;
unsigned int var_14 = 2615939578U;
unsigned char var_15 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
