#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 18348464791310317554ULL;
unsigned long long int var_12 = 15308610678122749985ULL;
int zero = 0;
long long int var_18 = 678290149497465010LL;
long long int var_19 = -6175550597173268595LL;
unsigned short var_20 = (unsigned short)21104;
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
