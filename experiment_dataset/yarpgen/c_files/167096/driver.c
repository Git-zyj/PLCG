#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)212;
signed char var_5 = (signed char)5;
signed char var_7 = (signed char)84;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)19988;
long long int var_13 = 1920137666645807860LL;
unsigned int var_16 = 2698648461U;
signed char var_17 = (signed char)23;
unsigned long long int var_18 = 1308572453327666498ULL;
int zero = 0;
int var_20 = 250687016;
signed char var_21 = (signed char)49;
unsigned char var_22 = (unsigned char)93;
unsigned short var_23 = (unsigned short)35544;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
