#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45568;
unsigned short var_3 = (unsigned short)14122;
unsigned short var_5 = (unsigned short)61229;
int var_6 = 1402107529;
unsigned short var_8 = (unsigned short)37103;
int var_9 = 650186085;
int zero = 0;
unsigned short var_10 = (unsigned short)21546;
unsigned char var_11 = (unsigned char)20;
_Bool var_12 = (_Bool)0;
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
