#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30040;
long long int var_1 = -7785744769745825536LL;
unsigned short var_3 = (unsigned short)22331;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)98;
short var_12 = (short)-19619;
unsigned char var_13 = (unsigned char)214;
int zero = 0;
unsigned long long int var_17 = 6330763349718232628ULL;
int var_18 = 1142474267;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)63;
int var_21 = -1983690739;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
