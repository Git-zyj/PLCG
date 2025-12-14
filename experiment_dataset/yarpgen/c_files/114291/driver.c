#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14161;
short var_4 = (short)5883;
unsigned int var_6 = 2067315494U;
short var_8 = (short)15970;
unsigned short var_9 = (unsigned short)55295;
unsigned long long int var_10 = 743076358900728943ULL;
unsigned long long int var_13 = 9933315091733071755ULL;
int zero = 0;
unsigned int var_14 = 1254310501U;
short var_15 = (short)1036;
unsigned long long int var_16 = 14407290051960362059ULL;
void init() {
}

void checksum() {
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
