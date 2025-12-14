#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -306901831;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned long long int var_13 = 4449768002969097834ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 17876174133322043490ULL;
unsigned short var_20 = (unsigned short)38386;
_Bool var_21 = (_Bool)0;
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
