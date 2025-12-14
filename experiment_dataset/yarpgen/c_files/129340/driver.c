#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 5577152301414904038LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 13188193766529621812ULL;
int var_12 = -126114823;
signed char var_13 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
