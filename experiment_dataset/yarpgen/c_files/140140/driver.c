#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6950368547791234626LL;
unsigned long long int var_1 = 10045352333812202611ULL;
unsigned short var_2 = (unsigned short)38620;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)44;
unsigned char var_5 = (unsigned char)17;
unsigned int var_6 = 603150570U;
unsigned short var_7 = (unsigned short)24897;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 1452764507952560054ULL;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)72;
unsigned short var_12 = (unsigned short)46656;
_Bool var_13 = (_Bool)0;
long long int var_14 = -2359231288249974005LL;
unsigned long long int var_15 = 6682698317209997272ULL;
long long int var_16 = -927142676193814163LL;
int zero = 0;
unsigned short var_17 = (unsigned short)58341;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-43;
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
