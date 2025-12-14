#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)-69;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 13967683686486145170ULL;
unsigned char var_9 = (unsigned char)203;
long long int var_11 = 7500471791122330849LL;
signed char var_12 = (signed char)-114;
int zero = 0;
long long int var_14 = -1231896538278323741LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
