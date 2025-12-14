#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)185;
unsigned long long int var_7 = 2783403838471540301ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 18042981830572304388ULL;
short var_10 = (short)-22072;
int zero = 0;
unsigned long long int var_15 = 612674354880276534ULL;
unsigned long long int var_16 = 10783318044916975849ULL;
long long int var_17 = -5316001828715669622LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
