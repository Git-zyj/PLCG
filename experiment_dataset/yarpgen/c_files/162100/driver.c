#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6864222563128833034ULL;
long long int var_7 = -7285748528834384474LL;
_Bool var_9 = (_Bool)1;
int var_17 = -44404817;
int zero = 0;
unsigned char var_19 = (unsigned char)204;
long long int var_20 = -2009231935328515395LL;
unsigned int var_21 = 269740691U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
