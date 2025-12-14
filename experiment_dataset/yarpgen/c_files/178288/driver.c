#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
int var_1 = -824240036;
unsigned short var_4 = (unsigned short)5655;
unsigned int var_5 = 30518418U;
long long int var_7 = -8767589773245160501LL;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 3785987654U;
unsigned int var_11 = 3705619678U;
unsigned int var_12 = 4113355519U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 3334656634134814122ULL;
int var_18 = -1229428702;
unsigned int var_19 = 3029931436U;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 1509232892719030815ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
