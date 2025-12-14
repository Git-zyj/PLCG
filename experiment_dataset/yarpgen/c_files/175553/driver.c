#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
unsigned long long int var_1 = 9886345282910887714ULL;
unsigned short var_6 = (unsigned short)45265;
unsigned long long int var_7 = 600191662844605908ULL;
unsigned long long int var_8 = 10774939333049102269ULL;
short var_9 = (short)-8815;
unsigned short var_11 = (unsigned short)36471;
int zero = 0;
short var_12 = (short)-16453;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)29368;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
