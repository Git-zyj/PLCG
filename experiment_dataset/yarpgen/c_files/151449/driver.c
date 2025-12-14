#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12280;
short var_5 = (short)-15527;
_Bool var_6 = (_Bool)1;
int var_7 = -1789849325;
int var_9 = -2004041215;
long long int var_10 = -4780418513575614238LL;
int var_13 = 502084262;
unsigned int var_14 = 3299603228U;
int zero = 0;
unsigned int var_18 = 820748726U;
unsigned short var_19 = (unsigned short)51092;
int var_20 = 1443839778;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
