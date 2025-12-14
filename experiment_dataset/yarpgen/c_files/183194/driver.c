#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)32089;
long long int var_8 = 5595701124747846671LL;
unsigned short var_10 = (unsigned short)18160;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-106;
int zero = 0;
unsigned short var_17 = (unsigned short)48206;
short var_18 = (short)19530;
unsigned long long int var_19 = 11551643512100293509ULL;
void init() {
}

void checksum() {
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
