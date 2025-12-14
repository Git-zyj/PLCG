#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1165610830;
short var_7 = (short)-7928;
_Bool var_9 = (_Bool)1;
int var_10 = -445639385;
short var_11 = (short)25288;
unsigned short var_12 = (unsigned short)51261;
int zero = 0;
signed char var_14 = (signed char)-90;
unsigned long long int var_15 = 15029430109606222103ULL;
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
