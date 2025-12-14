#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 238737287;
_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 8023291551966881871ULL;
unsigned long long int var_7 = 10272517969424357396ULL;
unsigned long long int var_9 = 5289353754082250654ULL;
unsigned long long int var_10 = 1287838167429738179ULL;
int zero = 0;
signed char var_12 = (signed char)-32;
unsigned short var_13 = (unsigned short)51782;
unsigned int var_14 = 1505910755U;
signed char var_15 = (signed char)2;
unsigned char var_16 = (unsigned char)27;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
