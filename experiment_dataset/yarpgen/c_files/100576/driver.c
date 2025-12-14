#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
int var_5 = -2121098;
int var_9 = 204179356;
unsigned short var_11 = (unsigned short)62888;
short var_14 = (short)13788;
unsigned int var_15 = 4042643018U;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 680998772;
unsigned int var_19 = 296003025U;
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
