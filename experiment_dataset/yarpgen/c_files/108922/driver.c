#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)69;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 3365317528U;
signed char var_9 = (signed char)-65;
unsigned int var_10 = 1026069024U;
int zero = 0;
signed char var_13 = (signed char)-125;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)81;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
