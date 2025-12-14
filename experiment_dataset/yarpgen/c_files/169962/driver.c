#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2909029414436589011ULL;
unsigned int var_5 = 2552766486U;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)10;
_Bool var_15 = (_Bool)0;
_Bool var_17 = (_Bool)0;
_Bool var_19 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -1192186872;
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
