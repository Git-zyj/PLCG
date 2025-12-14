#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13484545525039051456ULL;
unsigned long long int var_3 = 17063584502354806467ULL;
signed char var_4 = (signed char)-59;
short var_7 = (short)-4767;
long long int var_8 = 7511800361679324192LL;
unsigned long long int var_9 = 2058072931286051590ULL;
short var_12 = (short)-8215;
int zero = 0;
signed char var_13 = (signed char)-118;
signed char var_14 = (signed char)18;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)35;
short var_17 = (short)32567;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
