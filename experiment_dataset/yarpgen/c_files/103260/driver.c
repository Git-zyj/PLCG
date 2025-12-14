#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-53;
signed char var_1 = (signed char)120;
unsigned char var_2 = (unsigned char)225;
_Bool var_9 = (_Bool)0;
int var_10 = 1565501935;
int var_12 = 114857674;
int zero = 0;
unsigned long long int var_13 = 3830648789478509448ULL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3600416657U;
void init() {
}

void checksum() {
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
