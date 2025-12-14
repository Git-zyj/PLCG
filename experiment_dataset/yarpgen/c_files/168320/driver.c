#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2486119255691555194LL;
long long int var_4 = -8154779638836968520LL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)43;
unsigned long long int var_9 = 11511114694434549514ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)1224;
long long int var_14 = -8575422096687140409LL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 850495372166232468ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
