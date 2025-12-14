#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4664086772991952859LL;
unsigned short var_5 = (unsigned short)23064;
long long int var_11 = 3733947201567275544LL;
int zero = 0;
unsigned short var_16 = (unsigned short)33828;
unsigned short var_17 = (unsigned short)20941;
unsigned char var_18 = (unsigned char)113;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
