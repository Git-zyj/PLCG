#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-87;
unsigned int var_3 = 2106317064U;
unsigned short var_4 = (unsigned short)43429;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 3051018023U;
unsigned int var_11 = 2273714082U;
int var_12 = 272768599;
int zero = 0;
unsigned long long int var_16 = 10524917338748046542ULL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
