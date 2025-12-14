#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_3 = (unsigned short)62497;
unsigned char var_6 = (unsigned char)236;
unsigned long long int var_8 = 17966429145479947300ULL;
unsigned char var_10 = (unsigned char)106;
unsigned long long int var_12 = 16855409742360069705ULL;
int zero = 0;
int var_14 = -43336773;
unsigned short var_15 = (unsigned short)58882;
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
