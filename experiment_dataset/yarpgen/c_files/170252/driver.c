#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-52;
int var_5 = -1189170957;
long long int var_8 = 6654203695879406996LL;
int zero = 0;
unsigned int var_12 = 1280898700U;
unsigned long long int var_13 = 9449907955899091836ULL;
unsigned long long int var_14 = 17653542674595638176ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
