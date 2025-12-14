#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 198172787049455610LL;
signed char var_2 = (signed char)95;
unsigned short var_4 = (unsigned short)26285;
long long int var_5 = -8264168866861705509LL;
unsigned int var_8 = 1160686302U;
signed char var_9 = (signed char)123;
int var_10 = -598230800;
int zero = 0;
unsigned int var_11 = 2334047905U;
unsigned short var_12 = (unsigned short)3259;
short var_13 = (short)-22976;
unsigned long long int var_14 = 17382376833941964405ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
