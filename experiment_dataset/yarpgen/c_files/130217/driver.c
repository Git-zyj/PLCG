#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3822861501U;
long long int var_8 = -1194709248394087340LL;
unsigned char var_9 = (unsigned char)102;
int var_11 = 119539972;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 2907084937074658938ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)40713;
short var_16 = (short)19070;
int var_17 = 1910498411;
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
