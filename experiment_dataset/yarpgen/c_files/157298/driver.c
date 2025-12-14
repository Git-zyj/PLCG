#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8760419788161297349LL;
signed char var_2 = (signed char)-50;
unsigned int var_3 = 671764262U;
unsigned short var_4 = (unsigned short)41281;
signed char var_6 = (signed char)32;
_Bool var_7 = (_Bool)0;
long long int var_10 = 8874292985602084852LL;
int zero = 0;
long long int var_17 = -9171663186813741762LL;
long long int var_18 = 7204176434771499770LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
