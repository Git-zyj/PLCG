#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3676428554U;
long long int var_6 = -4768035051861268024LL;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)101;
int zero = 0;
long long int var_12 = 253558282404555823LL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
