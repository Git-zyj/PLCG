#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)9095;
unsigned int var_6 = 125384511U;
short var_7 = (short)8980;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3362083176U;
int zero = 0;
short var_10 = (short)-1046;
int var_11 = 1893952390;
long long int var_12 = 7926338897079469470LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
