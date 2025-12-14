#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-30;
long long int var_6 = -4053875728195107896LL;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)241;
int var_13 = -1205720232;
long long int var_14 = 2310714773162669471LL;
unsigned char var_15 = (unsigned char)151;
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
