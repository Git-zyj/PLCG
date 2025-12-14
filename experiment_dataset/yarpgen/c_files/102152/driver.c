#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)72;
unsigned int var_1 = 175427924U;
signed char var_3 = (signed char)-111;
long long int var_6 = 8835474563795058454LL;
unsigned short var_10 = (unsigned short)9148;
int zero = 0;
int var_11 = -2005905035;
unsigned char var_12 = (unsigned char)150;
short var_13 = (short)-11001;
void init() {
}

void checksum() {
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
