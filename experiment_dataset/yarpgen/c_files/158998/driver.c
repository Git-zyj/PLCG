#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1748369186U;
unsigned int var_2 = 3365984143U;
unsigned long long int var_4 = 9646727159160190363ULL;
int var_5 = 76466804;
unsigned char var_6 = (unsigned char)91;
unsigned short var_9 = (unsigned short)59627;
unsigned int var_10 = 3290071757U;
long long int var_11 = -4810552497528635856LL;
short var_12 = (short)31276;
int zero = 0;
unsigned long long int var_13 = 2984097747957898993ULL;
long long int var_14 = -1638244573560715011LL;
short var_15 = (short)17329;
signed char var_16 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
