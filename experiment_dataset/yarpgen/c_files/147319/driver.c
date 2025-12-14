#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60117;
unsigned int var_11 = 2239440796U;
unsigned short var_12 = (unsigned short)47363;
int zero = 0;
unsigned long long int var_16 = 11235904265436183605ULL;
short var_17 = (short)-13514;
unsigned long long int var_18 = 2203994562883913295ULL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1441931555U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
