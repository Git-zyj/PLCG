#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 18167523835371223236ULL;
unsigned long long int var_15 = 17490793774993384345ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)43439;
signed char var_19 = (signed char)-14;
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
