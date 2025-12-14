#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1743091473;
unsigned short var_6 = (unsigned short)9504;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)47608;
long long int var_15 = 3510422007782638008LL;
unsigned long long int var_17 = 313256683133275718ULL;
int zero = 0;
unsigned int var_19 = 2381987618U;
unsigned int var_20 = 2778130360U;
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
