#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6904557500309585792ULL;
int var_3 = 961734708;
int var_4 = 1856011357;
unsigned char var_5 = (unsigned char)94;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
long long int var_9 = -6171993664552747282LL;
int zero = 0;
unsigned char var_11 = (unsigned char)92;
unsigned long long int var_12 = 6614062726355877914ULL;
signed char var_13 = (signed char)100;
unsigned char var_14 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
