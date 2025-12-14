#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1637809733;
long long int var_11 = -7951757596779214109LL;
unsigned long long int var_12 = 10044430139069826282ULL;
int zero = 0;
signed char var_15 = (signed char)-66;
unsigned long long int var_16 = 12284072450539121552ULL;
signed char var_17 = (signed char)-80;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)14;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
