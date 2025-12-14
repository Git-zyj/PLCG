#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)78;
short var_1 = (short)-21776;
long long int var_4 = 4568276226625275489LL;
_Bool var_5 = (_Bool)0;
unsigned int var_12 = 653201577U;
long long int var_15 = -7765008000037641165LL;
int zero = 0;
long long int var_17 = 4731052582664282282LL;
unsigned char var_18 = (unsigned char)111;
unsigned int var_19 = 746268005U;
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
