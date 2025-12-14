#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3753056732U;
unsigned short var_6 = (unsigned short)6965;
unsigned int var_9 = 509292798U;
unsigned long long int var_10 = 10495279520251354751ULL;
long long int var_13 = 629300960396203079LL;
unsigned short var_14 = (unsigned short)56766;
int var_16 = 1739169248;
int zero = 0;
int var_17 = 585660366;
int var_18 = -1370497851;
int var_19 = 1543962734;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
