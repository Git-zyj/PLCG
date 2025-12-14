#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-13;
unsigned int var_3 = 1808984190U;
signed char var_6 = (signed char)67;
long long int var_7 = -157548772631153242LL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)64741;
long long int var_10 = 3529694559889939624LL;
unsigned char var_11 = (unsigned char)20;
unsigned int var_12 = 2009348349U;
unsigned long long int var_14 = 6481662407593264908ULL;
unsigned int var_15 = 1981045069U;
int zero = 0;
unsigned char var_16 = (unsigned char)109;
signed char var_17 = (signed char)15;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-106;
long long int var_20 = -7104592215341592507LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
