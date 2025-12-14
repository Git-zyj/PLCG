#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)153;
short var_5 = (short)-25740;
unsigned char var_7 = (unsigned char)179;
signed char var_8 = (signed char)57;
short var_9 = (short)31719;
unsigned int var_10 = 294311520U;
unsigned long long int var_11 = 17470905439748686430ULL;
long long int var_14 = -7896930143970833442LL;
int zero = 0;
signed char var_18 = (signed char)112;
unsigned long long int var_19 = 17707418636831015584ULL;
unsigned long long int var_20 = 9068619669985300204ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
