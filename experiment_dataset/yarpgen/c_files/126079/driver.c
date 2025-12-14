#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2813193884U;
unsigned int var_5 = 3177235745U;
_Bool var_11 = (_Bool)0;
unsigned long long int var_14 = 11726982426515153044ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 2613077732U;
short var_21 = (short)26496;
unsigned int var_22 = 3210709083U;
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
