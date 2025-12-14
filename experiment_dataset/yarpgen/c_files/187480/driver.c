#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1508993704565591988LL;
unsigned int var_2 = 1876793285U;
long long int var_3 = 410104490988632648LL;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = -7569947691743603706LL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
