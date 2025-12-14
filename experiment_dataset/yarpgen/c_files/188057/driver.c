#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8548295726839998574LL;
int var_6 = -217011467;
long long int var_11 = 7538383269214303419LL;
int zero = 0;
unsigned int var_14 = 541892096U;
unsigned char var_15 = (unsigned char)75;
void init() {
}

void checksum() {
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
