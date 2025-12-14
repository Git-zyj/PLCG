#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32247;
signed char var_2 = (signed char)92;
long long int var_8 = 8539376889062223096LL;
signed char var_9 = (signed char)-60;
unsigned char var_16 = (unsigned char)108;
long long int var_17 = 7517489155061748753LL;
int zero = 0;
int var_18 = -1743647201;
short var_19 = (short)-11482;
unsigned short var_20 = (unsigned short)32112;
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
