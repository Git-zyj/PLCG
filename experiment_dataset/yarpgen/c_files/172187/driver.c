#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2273498104033095872ULL;
int var_6 = -1040781401;
unsigned short var_9 = (unsigned short)60359;
long long int var_12 = 6165485743618228702LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)22;
unsigned short var_20 = (unsigned short)25702;
void init() {
}

void checksum() {
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
