#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)90;
long long int var_2 = 338361612922712076LL;
unsigned char var_5 = (unsigned char)106;
short var_8 = (short)6993;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)61569;
unsigned short var_12 = (unsigned short)48738;
long long int var_13 = 2663443544883439583LL;
int zero = 0;
signed char var_15 = (signed char)121;
unsigned short var_16 = (unsigned short)5876;
unsigned long long int var_17 = 269775952990024256ULL;
unsigned long long int var_18 = 3646286462496704520ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
