#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3244273013874923681LL;
unsigned char var_1 = (unsigned char)104;
unsigned short var_4 = (unsigned short)30807;
unsigned short var_5 = (unsigned short)17735;
int zero = 0;
unsigned short var_10 = (unsigned short)11678;
unsigned int var_11 = 2273356636U;
unsigned short var_12 = (unsigned short)5531;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
