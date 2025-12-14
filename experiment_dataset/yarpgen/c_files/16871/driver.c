#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16917065379615578850ULL;
long long int var_7 = 5502304354211007915LL;
int var_8 = 937937141;
_Bool var_9 = (_Bool)1;
unsigned long long int var_14 = 12214310180677336464ULL;
int zero = 0;
signed char var_18 = (signed char)9;
unsigned char var_19 = (unsigned char)228;
signed char var_20 = (signed char)22;
void init() {
}

void checksum() {
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
