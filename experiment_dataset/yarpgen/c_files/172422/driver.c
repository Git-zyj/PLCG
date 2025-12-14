#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-90;
unsigned short var_4 = (unsigned short)45142;
short var_5 = (short)-21790;
signed char var_6 = (signed char)67;
long long int var_16 = 9069700844510732939LL;
int zero = 0;
long long int var_17 = 420773709444863144LL;
long long int var_18 = -3757919392254960809LL;
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
