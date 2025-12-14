#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30784;
int var_2 = 886115296;
int var_3 = 1844500468;
_Bool var_5 = (_Bool)0;
unsigned char var_9 = (unsigned char)189;
unsigned int var_10 = 4132384462U;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 3939895538797599936LL;
long long int var_13 = 8221227404677782252LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
