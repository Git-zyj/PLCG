#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)70;
signed char var_5 = (signed char)-16;
unsigned short var_10 = (unsigned short)9405;
unsigned int var_12 = 1941743665U;
int zero = 0;
long long int var_20 = 857380494776529813LL;
signed char var_21 = (signed char)-39;
unsigned char var_22 = (unsigned char)249;
unsigned long long int var_23 = 15130210848784312245ULL;
unsigned long long int var_24 = 1020320883480155816ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
