#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32092;
long long int var_1 = 778837790337571008LL;
unsigned long long int var_2 = 17543307932930528439ULL;
unsigned short var_4 = (unsigned short)5878;
long long int var_5 = -7231280562055494313LL;
int zero = 0;
unsigned short var_14 = (unsigned short)52035;
unsigned long long int var_15 = 2078572473127823631ULL;
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
