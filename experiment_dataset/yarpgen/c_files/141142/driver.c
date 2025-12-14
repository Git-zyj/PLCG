#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5548386206365760128LL;
int var_4 = -628956019;
unsigned long long int var_12 = 15132537550831467501ULL;
int zero = 0;
long long int var_20 = -3293612119143482455LL;
unsigned char var_21 = (unsigned char)105;
int var_22 = 513273467;
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
