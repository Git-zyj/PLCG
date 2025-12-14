#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)1646;
unsigned long long int var_11 = 376596881939967297ULL;
unsigned long long int var_18 = 13274919387315714150ULL;
int zero = 0;
long long int var_20 = 3050508646956389196LL;
unsigned short var_21 = (unsigned short)3460;
unsigned long long int var_22 = 2169202282437703867ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
