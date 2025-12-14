#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = -8484828522437540761LL;
unsigned char var_4 = (unsigned char)180;
short var_9 = (short)25710;
short var_12 = (short)-32306;
unsigned short var_15 = (unsigned short)22950;
unsigned long long int var_16 = 16382875272956638720ULL;
int zero = 0;
unsigned long long int var_17 = 10860917474352327989ULL;
_Bool var_18 = (_Bool)0;
short var_19 = (short)22375;
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
