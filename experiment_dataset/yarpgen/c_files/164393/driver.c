#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31091;
unsigned short var_6 = (unsigned short)8854;
unsigned short var_10 = (unsigned short)39754;
long long int var_14 = 463711617714296330LL;
short var_15 = (short)876;
long long int var_18 = 8277477577015149506LL;
int zero = 0;
long long int var_20 = 7513304038990623112LL;
long long int var_21 = -579758706371423484LL;
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
