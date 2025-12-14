#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 655479214U;
unsigned char var_6 = (unsigned char)94;
unsigned int var_7 = 2452857947U;
signed char var_10 = (signed char)-108;
unsigned long long int var_11 = 15848419687899792172ULL;
int zero = 0;
unsigned int var_15 = 1438596896U;
long long int var_16 = -761915167160727036LL;
unsigned int var_17 = 783647437U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
