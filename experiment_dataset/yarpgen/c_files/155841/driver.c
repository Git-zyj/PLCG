#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1045568870U;
long long int var_1 = 5559760116938021448LL;
_Bool var_7 = (_Bool)0;
long long int var_10 = 1088453210893175471LL;
signed char var_19 = (signed char)103;
int zero = 0;
unsigned char var_20 = (unsigned char)68;
long long int var_21 = 8295781083806901156LL;
void init() {
}

void checksum() {
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
