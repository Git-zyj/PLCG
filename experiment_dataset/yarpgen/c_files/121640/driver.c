#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)172;
long long int var_3 = -566809854058678703LL;
signed char var_8 = (signed char)41;
long long int var_9 = -1353253828097142301LL;
signed char var_12 = (signed char)-63;
signed char var_14 = (signed char)62;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-126;
unsigned char var_19 = (unsigned char)78;
int var_20 = 1751810995;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
