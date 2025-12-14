#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -961540700;
long long int var_3 = 2911542111196815798LL;
unsigned long long int var_5 = 8487575439889743751ULL;
long long int var_10 = 7453902987238452044LL;
unsigned long long int var_11 = 2912941675175904486ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 752083160;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
