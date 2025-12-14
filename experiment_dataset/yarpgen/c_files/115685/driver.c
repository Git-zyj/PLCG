#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5687337580113814329LL;
unsigned short var_1 = (unsigned short)23763;
_Bool var_2 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 1810416410U;
unsigned int var_18 = 878887417U;
_Bool var_19 = (_Bool)0;
int var_20 = 1143570228;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
