#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16979216407135246227ULL;
int var_2 = -1425593451;
_Bool var_4 = (_Bool)0;
int var_5 = -405005987;
unsigned int var_6 = 1824407816U;
long long int var_8 = -7078190761142873495LL;
long long int var_11 = -4884382836269748088LL;
int zero = 0;
signed char var_14 = (signed char)-31;
long long int var_15 = -1939951331894154026LL;
signed char var_16 = (signed char)-6;
unsigned short var_17 = (unsigned short)52935;
int var_18 = -821479664;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
