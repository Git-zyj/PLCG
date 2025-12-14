#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7602820266397635367LL;
unsigned short var_3 = (unsigned short)13203;
short var_8 = (short)14988;
_Bool var_10 = (_Bool)1;
int var_11 = -2056498111;
int zero = 0;
unsigned char var_15 = (unsigned char)82;
unsigned int var_16 = 4228449159U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
