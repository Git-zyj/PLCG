#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-118;
signed char var_2 = (signed char)87;
unsigned char var_3 = (unsigned char)81;
unsigned int var_7 = 3736048756U;
signed char var_8 = (signed char)97;
unsigned int var_9 = 2060648153U;
_Bool var_10 = (_Bool)0;
int var_11 = -1755194813;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 3487603003674879040LL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
