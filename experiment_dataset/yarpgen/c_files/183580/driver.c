#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5771416039584366141ULL;
int var_2 = -946399656;
int var_3 = -755296149;
unsigned long long int var_6 = 11621789052368190295ULL;
int var_9 = -1984767437;
unsigned short var_10 = (unsigned short)24980;
int zero = 0;
unsigned int var_11 = 2228906051U;
_Bool var_12 = (_Bool)1;
int var_13 = 1725347417;
unsigned short var_14 = (unsigned short)62614;
void init() {
}

void checksum() {
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
