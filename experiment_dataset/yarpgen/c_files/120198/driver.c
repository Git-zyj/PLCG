#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2306673203244553733LL;
long long int var_3 = 4656075657738612895LL;
signed char var_10 = (signed char)59;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)55;
unsigned short var_15 = (unsigned short)1839;
signed char var_16 = (signed char)-98;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
