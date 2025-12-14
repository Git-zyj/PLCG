#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1350528183U;
int var_1 = 882045716;
_Bool var_2 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1174301093U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 225597450U;
unsigned int var_10 = 1846960987U;
int zero = 0;
int var_11 = -1481358803;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 1363733648006793200ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
