#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1339867089;
long long int var_5 = -7294383143846611375LL;
int var_7 = -1365135037;
signed char var_10 = (signed char)-99;
int var_11 = 13448077;
int zero = 0;
unsigned short var_13 = (unsigned short)34630;
unsigned short var_14 = (unsigned short)48196;
int var_15 = -1370179537;
signed char var_16 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
