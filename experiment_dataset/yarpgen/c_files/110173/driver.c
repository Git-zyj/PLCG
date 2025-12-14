#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)242;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
signed char var_10 = (signed char)59;
long long int var_14 = 5094744845086702530LL;
unsigned long long int var_16 = 12259286231807296396ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -8426285250200533696LL;
long long int var_21 = -2988791912399412906LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
