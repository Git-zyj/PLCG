#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11217902012070022764ULL;
unsigned long long int var_3 = 1262206288252725071ULL;
unsigned long long int var_5 = 18250261394852774748ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)9317;
int zero = 0;
signed char var_10 = (signed char)-59;
signed char var_11 = (signed char)-110;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
