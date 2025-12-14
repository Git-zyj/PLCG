#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18174860827236317345ULL;
unsigned int var_1 = 1130610888U;
_Bool var_2 = (_Bool)1;
long long int var_4 = -6261852448444657685LL;
unsigned char var_6 = (unsigned char)71;
unsigned long long int var_11 = 5928807087561410838ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = -1445166837;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)24046;
long long int var_17 = 3033017541758546733LL;
short var_18 = (short)-21106;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
