#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 6319487160832890058ULL;
unsigned long long int var_10 = 16629538251815876577ULL;
signed char var_12 = (signed char)-28;
unsigned long long int var_13 = 9973893870770201798ULL;
unsigned long long int var_14 = 1860414635512051417ULL;
int zero = 0;
long long int var_20 = 6351493751858286582LL;
unsigned short var_21 = (unsigned short)51908;
unsigned short var_22 = (unsigned short)60597;
void init() {
}

void checksum() {
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
