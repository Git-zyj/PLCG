#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -3904323770726473088LL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_9 = 13869625859336609399ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)171;
unsigned long long int var_18 = 3078629310926570349ULL;
void init() {
}

void checksum() {
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
