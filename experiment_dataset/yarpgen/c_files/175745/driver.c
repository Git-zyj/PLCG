#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)49;
_Bool var_3 = (_Bool)0;
long long int var_4 = 6215667194309309526LL;
unsigned short var_5 = (unsigned short)11469;
short var_9 = (short)14497;
unsigned int var_11 = 3153786026U;
int zero = 0;
signed char var_13 = (signed char)-30;
unsigned char var_14 = (unsigned char)77;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
