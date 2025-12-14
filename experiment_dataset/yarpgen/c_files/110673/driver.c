#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6517542031603630109LL;
signed char var_1 = (signed char)-16;
unsigned int var_2 = 2188017501U;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 3877755832333683623ULL;
unsigned int var_6 = 2245491063U;
unsigned long long int var_7 = 8892643228484144280ULL;
long long int var_8 = 6077301053964523021LL;
unsigned int var_12 = 126884590U;
unsigned long long int var_14 = 14327456419743181580ULL;
int zero = 0;
long long int var_15 = -1430218172594673353LL;
signed char var_16 = (signed char)-79;
short var_17 = (short)-12959;
void init() {
}

void checksum() {
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
