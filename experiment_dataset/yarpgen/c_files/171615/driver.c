#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7145836361156955961LL;
unsigned long long int var_1 = 8962340571533572384ULL;
short var_3 = (short)18770;
unsigned int var_6 = 801222941U;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)62;
long long int var_13 = 63429116247002011LL;
unsigned int var_16 = 3806974555U;
int zero = 0;
long long int var_17 = 5098407475081940234LL;
signed char var_18 = (signed char)-26;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
