#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1362253398;
unsigned char var_2 = (unsigned char)115;
unsigned int var_11 = 2097696001U;
signed char var_12 = (signed char)48;
unsigned int var_14 = 3102243023U;
int zero = 0;
long long int var_18 = 3910126691050393116LL;
long long int var_19 = 8337979559436801170LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
