#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31153;
long long int var_1 = 6284774101298087094LL;
long long int var_2 = 8001813261969449423LL;
long long int var_3 = -1169646983410072671LL;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)41966;
short var_9 = (short)-31728;
short var_12 = (short)-2586;
unsigned int var_13 = 1351883847U;
int zero = 0;
unsigned int var_14 = 3876636706U;
short var_15 = (short)-3083;
long long int var_16 = -2723483310028830423LL;
long long int var_17 = 7927953859212926696LL;
void init() {
}

void checksum() {
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
