#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)34;
unsigned long long int var_3 = 4185164828460646638ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_8 = 2104684856U;
signed char var_10 = (signed char)-44;
int zero = 0;
long long int var_17 = -1153395689132029910LL;
signed char var_18 = (signed char)113;
unsigned char var_19 = (unsigned char)242;
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
