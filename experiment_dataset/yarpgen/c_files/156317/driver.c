#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)31256;
signed char var_7 = (signed char)-98;
short var_9 = (short)-28820;
unsigned int var_10 = 3416206304U;
int var_11 = 1899616939;
unsigned short var_12 = (unsigned short)11620;
int zero = 0;
unsigned int var_14 = 1701411874U;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 26424392U;
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
