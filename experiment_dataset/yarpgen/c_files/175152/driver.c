#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1438593922;
unsigned char var_1 = (unsigned char)121;
unsigned int var_6 = 4289217377U;
short var_12 = (short)-18389;
long long int var_13 = 4549181742295341566LL;
unsigned short var_14 = (unsigned short)50867;
unsigned int var_16 = 4282832737U;
int zero = 0;
unsigned int var_17 = 1385899887U;
unsigned long long int var_18 = 14384179418020534968ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
