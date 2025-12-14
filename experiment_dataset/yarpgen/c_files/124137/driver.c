#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -331827169;
int var_1 = -496736813;
unsigned char var_2 = (unsigned char)220;
int var_3 = -1627043102;
long long int var_5 = -9020495496378227309LL;
signed char var_7 = (signed char)-4;
unsigned long long int var_9 = 15111627248865436010ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)31328;
unsigned long long int var_12 = 16487490279775682056ULL;
int var_13 = 1853161691;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
