#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -62263743;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)53837;
long long int var_14 = -5133796472748094600LL;
long long int var_15 = -1680261512773106644LL;
int zero = 0;
long long int var_16 = -2535751929860939349LL;
long long int var_17 = 2329833459508763489LL;
unsigned short var_18 = (unsigned short)54309;
void init() {
}

void checksum() {
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
