#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11979503865178487924ULL;
unsigned long long int var_1 = 10790473292669069650ULL;
long long int var_2 = 5057516420131372601LL;
unsigned char var_8 = (unsigned char)127;
short var_9 = (short)25124;
unsigned short var_10 = (unsigned short)9582;
unsigned int var_12 = 2989148738U;
unsigned char var_15 = (unsigned char)143;
int zero = 0;
short var_17 = (short)22150;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 2581618053117866874ULL;
unsigned long long int var_20 = 4968515344881490740ULL;
void init() {
}

void checksum() {
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
