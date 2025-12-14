#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)109;
int var_6 = -569887338;
_Bool var_10 = (_Bool)0;
long long int var_13 = 1983101816841965795LL;
int zero = 0;
unsigned char var_14 = (unsigned char)138;
int var_15 = -881644158;
_Bool var_16 = (_Bool)0;
int var_17 = 1915110119;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
