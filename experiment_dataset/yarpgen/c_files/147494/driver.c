#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 3175439969312952924LL;
long long int var_8 = -8207217577074137521LL;
short var_9 = (short)-13188;
unsigned short var_10 = (unsigned short)9202;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)128;
int zero = 0;
unsigned short var_17 = (unsigned short)26801;
long long int var_18 = -3599114005659937596LL;
unsigned long long int var_19 = 17157371848042474132ULL;
unsigned int var_20 = 2846156128U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
