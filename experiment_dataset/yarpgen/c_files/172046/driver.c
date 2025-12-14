#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14576;
int var_2 = 1974518528;
long long int var_3 = 8097475089067921832LL;
unsigned int var_4 = 142800705U;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 17975907222683599664ULL;
unsigned short var_12 = (unsigned short)41131;
int var_13 = 1743304016;
unsigned long long int var_18 = 3435601533666984434ULL;
int zero = 0;
long long int var_19 = 1880563475402934688LL;
unsigned int var_20 = 4181910467U;
void init() {
}

void checksum() {
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
