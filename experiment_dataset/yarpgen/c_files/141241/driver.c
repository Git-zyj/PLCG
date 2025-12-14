#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32595;
long long int var_2 = 2195605569095344045LL;
long long int var_3 = -1357667877428882934LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
long long int var_11 = 7824938548847668111LL;
long long int var_12 = 768943962660312841LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 736445215642692142ULL;
short var_18 = (short)-1565;
long long int var_19 = 3656989985049154511LL;
long long int var_20 = -1876801825556464621LL;
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
