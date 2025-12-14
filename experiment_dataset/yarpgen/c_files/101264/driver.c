#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1400266055;
long long int var_2 = 3705909231669461862LL;
unsigned char var_4 = (unsigned char)91;
unsigned short var_5 = (unsigned short)47339;
long long int var_6 = 1759710231166106368LL;
unsigned char var_7 = (unsigned char)187;
long long int var_9 = 6175087839005954681LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 8929536651434319566LL;
int var_12 = -339793214;
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
