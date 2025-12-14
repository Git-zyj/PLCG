#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3922685559U;
unsigned int var_1 = 527299314U;
signed char var_2 = (signed char)-36;
unsigned long long int var_4 = 5835126426499844334ULL;
long long int var_5 = 4822648017375842231LL;
unsigned int var_9 = 2697813427U;
int var_10 = 1479636429;
unsigned char var_11 = (unsigned char)209;
short var_12 = (short)-30934;
unsigned int var_13 = 2133188626U;
int zero = 0;
signed char var_14 = (signed char)56;
short var_15 = (short)476;
unsigned char var_16 = (unsigned char)15;
signed char var_17 = (signed char)117;
void init() {
}

void checksum() {
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
