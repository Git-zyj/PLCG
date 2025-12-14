#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17226531989897272826ULL;
signed char var_3 = (signed char)-54;
unsigned int var_7 = 3126915936U;
unsigned long long int var_10 = 15725348736343077931ULL;
unsigned short var_11 = (unsigned short)13164;
_Bool var_14 = (_Bool)1;
short var_16 = (short)15102;
int zero = 0;
unsigned int var_17 = 3262709868U;
unsigned long long int var_18 = 12538772031771996443ULL;
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
