#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 82446040;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)220;
int zero = 0;
long long int var_11 = 1657237246957603913LL;
int var_12 = 1216576951;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
