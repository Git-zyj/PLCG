#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)22;
signed char var_2 = (signed char)-23;
long long int var_5 = 7113434681605390308LL;
signed char var_8 = (signed char)-58;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -3394429739319482756LL;
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
