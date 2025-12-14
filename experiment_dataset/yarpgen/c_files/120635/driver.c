#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8520330273760354924LL;
long long int var_5 = 5689116398259217926LL;
long long int var_7 = 4331168964680657266LL;
unsigned short var_12 = (unsigned short)23110;
unsigned short var_13 = (unsigned short)52829;
long long int var_14 = -3193495401683499291LL;
unsigned short var_18 = (unsigned short)50516;
int zero = 0;
unsigned short var_19 = (unsigned short)22488;
long long int var_20 = 1368467219789897480LL;
long long int var_21 = -1153319994937940414LL;
long long int var_22 = 9043604035243428637LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
