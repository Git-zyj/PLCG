#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19863;
unsigned long long int var_3 = 9458020697899123577ULL;
unsigned int var_7 = 3485266361U;
unsigned long long int var_9 = 9486119885962616350ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 11466733180137932729ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
