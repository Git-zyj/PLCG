#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7325823117921787946ULL;
unsigned long long int var_4 = 4347582955807278477ULL;
unsigned long long int var_7 = 3732647876536042332ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 14921961262244635149ULL;
void init() {
}

void checksum() {
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
