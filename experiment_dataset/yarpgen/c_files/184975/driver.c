#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)81;
long long int var_4 = 5092735463135332440LL;
long long int var_5 = -1932228569418978880LL;
unsigned int var_11 = 3373170490U;
int var_13 = 1890232608;
int var_14 = -698764265;
int zero = 0;
signed char var_18 = (signed char)106;
unsigned short var_19 = (unsigned short)53721;
_Bool var_20 = (_Bool)1;
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
