#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5136557649606583184ULL;
short var_4 = (short)6605;
unsigned long long int var_15 = 16054982062248282506ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = -2252136101740086775LL;
unsigned long long int var_18 = 5318759714543857683ULL;
short var_19 = (short)10266;
_Bool var_20 = (_Bool)1;
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
