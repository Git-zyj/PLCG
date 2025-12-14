#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20031;
long long int var_3 = -4255570780620808302LL;
_Bool var_4 = (_Bool)1;
int var_8 = -570985959;
unsigned char var_10 = (unsigned char)22;
int zero = 0;
unsigned long long int var_12 = 5672332956403070531ULL;
signed char var_13 = (signed char)-66;
unsigned long long int var_14 = 14482549863400670796ULL;
unsigned short var_15 = (unsigned short)44557;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
