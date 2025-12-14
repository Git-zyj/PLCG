#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1405707991U;
unsigned short var_10 = (unsigned short)3187;
long long int var_12 = -5539225314943185789LL;
unsigned long long int var_18 = 6846722147500575024ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)50989;
long long int var_20 = -8695172039305624408LL;
unsigned long long int var_21 = 10034390288355137087ULL;
signed char var_22 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
