#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1730047868214027672LL;
signed char var_4 = (signed char)-114;
unsigned long long int var_6 = 3157932709447669440ULL;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)104;
short var_11 = (short)16921;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 13815060801772972547ULL;
unsigned long long int var_17 = 17133618895118951876ULL;
short var_18 = (short)13886;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
