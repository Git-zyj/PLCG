#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3899777775885285908LL;
int var_3 = 262561996;
int var_9 = 627217076;
long long int var_10 = 6100948394340782006LL;
_Bool var_11 = (_Bool)1;
long long int var_14 = -2478295100168928563LL;
long long int var_15 = 8531930684922629781LL;
long long int var_16 = -9093883567952005632LL;
int zero = 0;
unsigned short var_18 = (unsigned short)54105;
int var_19 = -603051393;
int var_20 = -1312775636;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
