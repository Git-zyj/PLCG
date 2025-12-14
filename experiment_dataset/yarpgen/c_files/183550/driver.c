#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 18117105358735438846ULL;
unsigned short var_11 = (unsigned short)2796;
long long int var_12 = -440422864494670018LL;
signed char var_13 = (signed char)84;
unsigned char var_14 = (unsigned char)129;
int var_15 = -718914673;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)26;
long long int var_19 = 2614836180756842826LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
