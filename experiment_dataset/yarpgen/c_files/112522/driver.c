#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2046155411U;
unsigned int var_1 = 4225591825U;
int var_4 = 2043488001;
int var_5 = 272562702;
_Bool var_9 = (_Bool)1;
unsigned short var_12 = (unsigned short)56331;
unsigned long long int var_13 = 616912921220232298ULL;
unsigned short var_15 = (unsigned short)60461;
int zero = 0;
unsigned char var_16 = (unsigned char)180;
unsigned int var_17 = 3281455106U;
short var_18 = (short)-16239;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
