#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)57928;
short var_5 = (short)17856;
long long int var_9 = 6312628499178214774LL;
long long int var_10 = -3024218235304288027LL;
int var_13 = -1615137275;
int zero = 0;
int var_15 = 1201363832;
int var_16 = 999380312;
long long int var_17 = -7411250698078707378LL;
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
