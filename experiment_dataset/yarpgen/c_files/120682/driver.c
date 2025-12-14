#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2486663161U;
long long int var_2 = -5993031973589022888LL;
unsigned long long int var_3 = 15340047446235306766ULL;
long long int var_6 = -7109967685271219044LL;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 2467686074676090016ULL;
unsigned short var_11 = (unsigned short)7103;
unsigned short var_16 = (unsigned short)62603;
long long int var_17 = 1334515876571235845LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_19 = 1139167668;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3798887249U;
unsigned long long int var_22 = 1560114531425988249ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
