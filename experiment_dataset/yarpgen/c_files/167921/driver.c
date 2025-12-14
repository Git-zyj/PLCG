#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)9236;
unsigned long long int var_6 = 17110482747938072007ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)35535;
signed char var_16 = (signed char)-53;
unsigned short var_17 = (unsigned short)12276;
unsigned long long int var_18 = 12076884723051568159ULL;
int var_19 = -1079068261;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
