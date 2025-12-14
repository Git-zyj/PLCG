#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-11;
long long int var_5 = -973120771924066797LL;
int zero = 0;
short var_10 = (short)23677;
unsigned char var_11 = (unsigned char)145;
long long int var_12 = 2356132010837557266LL;
unsigned long long int var_13 = 13101066561676082097ULL;
unsigned short var_14 = (unsigned short)39985;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
