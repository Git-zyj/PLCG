#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28659;
short var_2 = (short)3285;
long long int var_6 = 307618712591886853LL;
unsigned short var_9 = (unsigned short)44551;
long long int var_10 = 902138219006712445LL;
int zero = 0;
long long int var_11 = -730807136225792696LL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
