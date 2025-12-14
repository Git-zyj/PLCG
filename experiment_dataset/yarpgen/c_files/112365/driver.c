#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_5 = (unsigned char)217;
short var_6 = (short)-21340;
_Bool var_7 = (_Bool)1;
int var_8 = -32094589;
int zero = 0;
unsigned int var_10 = 1885265735U;
long long int var_11 = 3478821527432957246LL;
unsigned int var_12 = 255893024U;
int var_13 = -492741523;
unsigned int var_14 = 1163161954U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
