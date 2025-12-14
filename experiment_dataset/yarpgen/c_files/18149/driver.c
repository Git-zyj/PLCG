#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)115;
unsigned char var_1 = (unsigned char)136;
unsigned char var_2 = (unsigned char)58;
unsigned int var_4 = 4271533776U;
signed char var_6 = (signed char)-103;
long long int var_7 = 2099380688974436254LL;
signed char var_8 = (signed char)40;
unsigned short var_9 = (unsigned short)61169;
int zero = 0;
unsigned char var_10 = (unsigned char)211;
long long int var_11 = 323664178002709328LL;
unsigned long long int var_12 = 4449113580934637149ULL;
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
