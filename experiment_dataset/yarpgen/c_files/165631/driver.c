#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35087;
unsigned long long int var_4 = 7462056187575775927ULL;
long long int var_10 = -206047788394681209LL;
int var_13 = -1786294540;
unsigned long long int var_16 = 8821368803616405431ULL;
short var_18 = (short)10355;
signed char var_19 = (signed char)28;
int zero = 0;
long long int var_20 = -3543181407999912394LL;
int var_21 = -993219384;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
