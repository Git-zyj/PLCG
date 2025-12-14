#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2200250307039538475LL;
int var_5 = 582696053;
_Bool var_6 = (_Bool)0;
int var_9 = -1169598698;
unsigned char var_10 = (unsigned char)58;
int var_13 = -1085357253;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 5724299360662013675ULL;
unsigned char var_20 = (unsigned char)137;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
