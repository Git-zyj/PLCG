#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40121;
_Bool var_3 = (_Bool)0;
unsigned int var_6 = 3897262414U;
unsigned char var_9 = (unsigned char)144;
long long int var_10 = -1770082864151551594LL;
long long int var_11 = -4051839963075710052LL;
int zero = 0;
unsigned short var_13 = (unsigned short)29555;
short var_14 = (short)29626;
void init() {
}

void checksum() {
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
