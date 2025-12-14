#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)144;
unsigned char var_4 = (unsigned char)18;
long long int var_5 = -1748445844168806227LL;
_Bool var_6 = (_Bool)0;
long long int var_7 = 1812656360641996877LL;
unsigned short var_8 = (unsigned short)58831;
unsigned char var_11 = (unsigned char)111;
unsigned char var_12 = (unsigned char)175;
int var_13 = 51026694;
signed char var_14 = (signed char)123;
int zero = 0;
long long int var_16 = 3239318961617297525LL;
signed char var_17 = (signed char)1;
short var_18 = (short)-29318;
long long int var_19 = -7302225473508331869LL;
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
