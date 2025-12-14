#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2227956754U;
int var_2 = 2105855722;
int var_3 = -2118701862;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)15405;
int zero = 0;
long long int var_10 = 2668095697043758471LL;
int var_11 = -1926938529;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
