#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6803511693622071441LL;
unsigned short var_1 = (unsigned short)44356;
long long int var_4 = 6878666975473695750LL;
long long int var_5 = -6677849771830313463LL;
unsigned long long int var_7 = 10610725071135368078ULL;
unsigned long long int var_8 = 18099346622218881810ULL;
unsigned short var_9 = (unsigned short)35158;
long long int var_10 = -6199962347998529417LL;
long long int var_12 = 3465351507459509243LL;
unsigned long long int var_13 = 7698800503008738837ULL;
int zero = 0;
long long int var_14 = 285296956981811390LL;
long long int var_15 = -6447953862158697489LL;
long long int var_16 = -8098231045819871732LL;
unsigned long long int var_17 = 5543651965453778019ULL;
long long int var_18 = -2072514842806329021LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
