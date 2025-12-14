#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3436997129934311020ULL;
unsigned long long int var_4 = 8359179623505763312ULL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 10529232077983237708ULL;
unsigned int var_9 = 3551668070U;
unsigned long long int var_13 = 9477990837406903439ULL;
int zero = 0;
unsigned int var_20 = 1555755384U;
long long int var_21 = 2982074563261456004LL;
long long int var_22 = 7309969655316595889LL;
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
