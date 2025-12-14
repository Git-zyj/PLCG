#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8594001986028095615LL;
long long int var_2 = -8655884288926510641LL;
unsigned int var_6 = 68334089U;
unsigned long long int var_10 = 2637923477590147711ULL;
unsigned int var_11 = 2312998300U;
int var_12 = -780134001;
short var_13 = (short)12217;
_Bool var_14 = (_Bool)1;
long long int var_15 = 1878371324346214970LL;
int zero = 0;
unsigned short var_17 = (unsigned short)46359;
unsigned int var_18 = 1886769360U;
void init() {
}

void checksum() {
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
