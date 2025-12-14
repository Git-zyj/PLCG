#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4958776992990853309ULL;
unsigned char var_8 = (unsigned char)173;
unsigned int var_9 = 3857000667U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 10586348500150764101ULL;
unsigned int var_15 = 2292750815U;
int zero = 0;
unsigned long long int var_17 = 10855979671603571745ULL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 13572533457813915679ULL;
short var_20 = (short)9218;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
