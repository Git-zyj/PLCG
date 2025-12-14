#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3015888513962827942LL;
_Bool var_2 = (_Bool)1;
long long int var_3 = 2515557596362100620LL;
long long int var_4 = 1896535390756573105LL;
long long int var_7 = 1333350206706701606LL;
long long int var_8 = 866330002314207580LL;
long long int var_9 = 7814999953237778424LL;
_Bool var_10 = (_Bool)1;
long long int var_11 = -6878082446086046784LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = 8419265307359152008LL;
long long int var_14 = 7808312585992532123LL;
long long int var_15 = -4368596984065597685LL;
long long int var_16 = -436694044525638132LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
