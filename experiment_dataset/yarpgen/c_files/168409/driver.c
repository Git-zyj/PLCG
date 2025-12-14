#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1629;
unsigned char var_1 = (unsigned char)119;
_Bool var_2 = (_Bool)0;
short var_3 = (short)2643;
unsigned char var_6 = (unsigned char)107;
unsigned long long int var_8 = 14372568969799240517ULL;
unsigned long long int var_9 = 7823581089066563229ULL;
short var_10 = (short)2418;
int var_11 = 1184172187;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 498547268181840244LL;
unsigned char var_14 = (unsigned char)3;
unsigned char var_15 = (unsigned char)195;
signed char var_16 = (signed char)-39;
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
