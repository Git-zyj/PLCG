#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)22;
unsigned long long int var_1 = 12982508730457350521ULL;
unsigned long long int var_2 = 7472434366266376431ULL;
unsigned char var_5 = (unsigned char)53;
long long int var_7 = -5852341169586924460LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 12352735686573163851ULL;
int var_11 = 1669173848;
unsigned int var_12 = 3719388814U;
unsigned long long int var_14 = 10891849659147470984ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -8392482142379400624LL;
signed char var_17 = (signed char)119;
signed char var_18 = (signed char)33;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
