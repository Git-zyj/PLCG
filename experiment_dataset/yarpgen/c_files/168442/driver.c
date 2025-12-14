#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14104320403661467159ULL;
unsigned int var_1 = 2172837934U;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)155;
unsigned int var_10 = 228278702U;
int var_13 = 1661377408;
int var_15 = 1146929869;
int zero = 0;
long long int var_16 = 8755812375600998076LL;
unsigned short var_17 = (unsigned short)37611;
long long int var_18 = 6229140462459923014LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
