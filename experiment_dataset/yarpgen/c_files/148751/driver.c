#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7243;
int var_2 = -663445666;
unsigned char var_13 = (unsigned char)250;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 12571141298552946796ULL;
unsigned long long int var_19 = 17217561105538829298ULL;
long long int var_20 = 1818190747192434622LL;
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
