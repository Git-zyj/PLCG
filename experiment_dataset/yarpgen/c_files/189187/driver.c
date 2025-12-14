#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1983977590;
unsigned short var_4 = (unsigned short)11904;
unsigned char var_7 = (unsigned char)115;
unsigned int var_9 = 4130795477U;
unsigned long long int var_11 = 16520633610655127973ULL;
short var_12 = (short)-10663;
signed char var_14 = (signed char)5;
int zero = 0;
unsigned char var_16 = (unsigned char)242;
int var_17 = -1247523192;
unsigned long long int var_18 = 18090617205799060386ULL;
signed char var_19 = (signed char)-63;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
