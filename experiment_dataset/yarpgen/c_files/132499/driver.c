#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4561313847827459687LL;
short var_1 = (short)-16844;
long long int var_9 = -969220122079615494LL;
short var_12 = (short)-3487;
unsigned short var_15 = (unsigned short)28132;
int zero = 0;
signed char var_16 = (signed char)-8;
unsigned char var_17 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
