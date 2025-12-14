#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17641234470416703113ULL;
_Bool var_7 = (_Bool)0;
long long int var_8 = -4633729955181850187LL;
_Bool var_9 = (_Bool)0;
long long int var_12 = -4025059999241357157LL;
unsigned short var_13 = (unsigned short)31309;
int zero = 0;
long long int var_15 = -3789823348230210074LL;
unsigned long long int var_16 = 805631444601510507ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
