#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)123;
int var_7 = -1849926390;
unsigned short var_12 = (unsigned short)6619;
unsigned short var_13 = (unsigned short)16205;
unsigned long long int var_18 = 2698851352549004063ULL;
int zero = 0;
unsigned long long int var_19 = 10121527845768585340ULL;
signed char var_20 = (signed char)70;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
