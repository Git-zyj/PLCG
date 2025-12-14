#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17774;
long long int var_3 = -5318922352109604346LL;
int var_9 = 361187299;
unsigned short var_10 = (unsigned short)26328;
unsigned short var_11 = (unsigned short)17475;
short var_13 = (short)7712;
unsigned long long int var_14 = 11004625420216100803ULL;
int zero = 0;
long long int var_15 = 1505379116674575584LL;
int var_16 = -81695110;
unsigned short var_17 = (unsigned short)24035;
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
