#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -4876608999073813050LL;
long long int var_9 = -1892876583899719656LL;
_Bool var_11 = (_Bool)0;
int var_12 = -335002481;
int zero = 0;
unsigned int var_14 = 4100894344U;
unsigned int var_15 = 725048155U;
unsigned int var_16 = 4066872416U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
