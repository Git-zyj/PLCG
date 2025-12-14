#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5600356558109336813LL;
unsigned long long int var_15 = 8283927341103003499ULL;
unsigned long long int var_18 = 13533344936981441988ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 7565811599176134054ULL;
unsigned int var_21 = 1014288636U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
