#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
unsigned long long int var_7 = 11621371771107946021ULL;
int var_8 = 298936335;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 2411341688U;
unsigned short var_14 = (unsigned short)12713;
unsigned int var_15 = 3971772811U;
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
