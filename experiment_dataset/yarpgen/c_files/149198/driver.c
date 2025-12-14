#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3912433020028481815LL;
short var_1 = (short)-13663;
unsigned int var_4 = 1887473328U;
unsigned char var_6 = (unsigned char)27;
int var_8 = -1289298044;
long long int var_9 = 9097642809651063161LL;
short var_10 = (short)-16756;
int zero = 0;
unsigned char var_11 = (unsigned char)23;
unsigned char var_12 = (unsigned char)197;
void init() {
}

void checksum() {
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
