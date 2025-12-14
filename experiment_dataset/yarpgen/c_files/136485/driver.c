#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46269;
unsigned long long int var_1 = 10349579801020304999ULL;
short var_2 = (short)11365;
signed char var_3 = (signed char)44;
unsigned int var_4 = 1906118050U;
unsigned char var_6 = (unsigned char)186;
int var_9 = 686463729;
int zero = 0;
unsigned int var_11 = 1696101574U;
long long int var_12 = -4650588336577153927LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
