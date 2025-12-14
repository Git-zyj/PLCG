#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5301726055506413617ULL;
unsigned int var_2 = 2168156848U;
short var_3 = (short)-14675;
unsigned short var_9 = (unsigned short)53777;
int zero = 0;
long long int var_10 = -5399752393847178113LL;
unsigned long long int var_11 = 8944984485960259847ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)8015;
signed char var_14 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
