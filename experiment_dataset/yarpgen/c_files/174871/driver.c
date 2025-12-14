#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-118;
unsigned char var_14 = (unsigned char)184;
long long int var_17 = 5620459687702612098LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-63;
int var_22 = 1702353277;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
