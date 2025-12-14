#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7177;
unsigned char var_3 = (unsigned char)236;
_Bool var_4 = (_Bool)1;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -7227595236339423397LL;
short var_14 = (short)10213;
int zero = 0;
int var_15 = -676254694;
unsigned char var_16 = (unsigned char)23;
signed char var_17 = (signed char)102;
unsigned int var_18 = 3905902131U;
unsigned long long int var_19 = 15647288131297792346ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
