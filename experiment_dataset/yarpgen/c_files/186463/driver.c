#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6360112956522463763LL;
unsigned short var_5 = (unsigned short)34647;
long long int var_6 = -4387815538332155518LL;
unsigned short var_8 = (unsigned short)34723;
unsigned char var_9 = (unsigned char)103;
int zero = 0;
unsigned long long int var_10 = 14093873535762459514ULL;
int var_11 = -10002788;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
