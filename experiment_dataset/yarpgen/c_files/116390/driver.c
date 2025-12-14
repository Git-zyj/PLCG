#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3185459636U;
unsigned short var_4 = (unsigned short)39102;
int var_5 = 1660836882;
unsigned int var_6 = 2381360080U;
signed char var_8 = (signed char)31;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = 232264663247824210LL;
signed char var_11 = (signed char)-6;
unsigned int var_12 = 508001351U;
int var_13 = 1707745395;
unsigned short var_14 = (unsigned short)21130;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
