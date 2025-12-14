#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1385108909U;
long long int var_5 = -9078779695236339274LL;
long long int var_6 = 7169768821593792608LL;
int var_10 = -1558566431;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)211;
int zero = 0;
unsigned char var_18 = (unsigned char)194;
unsigned long long int var_19 = 6530881779069686560ULL;
unsigned long long int var_20 = 15709191395678731979ULL;
void init() {
}

void checksum() {
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
