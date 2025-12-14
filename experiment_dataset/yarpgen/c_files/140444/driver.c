#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2518394211U;
int var_2 = 2001873933;
int var_8 = 234009449;
signed char var_9 = (signed char)-59;
int var_10 = -1373232149;
int var_14 = 1249099118;
short var_15 = (short)-20244;
int zero = 0;
int var_16 = 648456811;
unsigned short var_17 = (unsigned short)43592;
unsigned char var_18 = (unsigned char)114;
int var_19 = -804912401;
void init() {
}

void checksum() {
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
