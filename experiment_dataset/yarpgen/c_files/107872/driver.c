#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 16175627860654117063ULL;
unsigned long long int var_6 = 16499495503684338862ULL;
unsigned char var_7 = (unsigned char)11;
unsigned short var_8 = (unsigned short)34724;
unsigned short var_9 = (unsigned short)57224;
long long int var_12 = -3634644804857028265LL;
unsigned long long int var_13 = 322238829454005351ULL;
int zero = 0;
int var_14 = 831864473;
signed char var_15 = (signed char)116;
unsigned short var_16 = (unsigned short)33180;
unsigned short var_17 = (unsigned short)9101;
long long int var_18 = -3313208585475068027LL;
long long int var_19 = 7561368049343531027LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
