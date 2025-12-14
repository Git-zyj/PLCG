#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1819;
long long int var_3 = -9144850786116016521LL;
unsigned short var_4 = (unsigned short)27396;
signed char var_7 = (signed char)26;
unsigned short var_8 = (unsigned short)16537;
unsigned short var_9 = (unsigned short)19834;
long long int var_10 = -1892508496526579466LL;
int zero = 0;
long long int var_15 = -5932077280082137753LL;
unsigned char var_16 = (unsigned char)206;
long long int var_17 = 430471670113075038LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
