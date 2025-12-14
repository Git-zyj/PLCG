#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6246954263504196282ULL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)86;
unsigned long long int var_8 = 11874458658957425705ULL;
int var_12 = 2018664303;
int zero = 0;
unsigned char var_13 = (unsigned char)194;
unsigned short var_14 = (unsigned short)45528;
void init() {
}

void checksum() {
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
