#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35732;
long long int var_1 = -8182893975340341569LL;
unsigned long long int var_11 = 17932934499872626430ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)11853;
long long int var_16 = -9216582876577094804LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
