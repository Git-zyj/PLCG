#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3381429459539514620LL;
int var_3 = -1001091336;
unsigned char var_4 = (unsigned char)126;
unsigned long long int var_5 = 3867984461997203280ULL;
long long int var_6 = 7848447264832168047LL;
unsigned short var_7 = (unsigned short)43558;
short var_8 = (short)18075;
long long int var_9 = 6312986012149960237LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = 1369023133002002101LL;
short var_12 = (short)-15427;
int var_13 = -1638015712;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
