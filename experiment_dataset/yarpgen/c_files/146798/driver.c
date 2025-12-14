#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -778768635;
long long int var_3 = -4394028770636373416LL;
unsigned long long int var_4 = 10825020418240067135ULL;
int var_7 = 870235231;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)248;
unsigned short var_11 = (unsigned short)47859;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)49295;
short var_16 = (short)-13276;
long long int var_17 = -6615737782079204449LL;
int zero = 0;
unsigned short var_18 = (unsigned short)57373;
unsigned long long int var_19 = 18336650695589328392ULL;
long long int var_20 = -5854796548115228662LL;
signed char var_21 = (signed char)61;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
