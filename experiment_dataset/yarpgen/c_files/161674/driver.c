#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4964040043868849307LL;
int var_3 = -1012414178;
unsigned char var_4 = (unsigned char)203;
int zero = 0;
unsigned long long int var_10 = 17461161791664160106ULL;
long long int var_11 = 7455842394106876226LL;
unsigned long long int var_12 = 894013671303227750ULL;
long long int var_13 = 644463095750606265LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
