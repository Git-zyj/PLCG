#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8372687144857744061LL;
int var_2 = -718939223;
int var_3 = -1057584557;
unsigned long long int var_6 = 17187742761065235419ULL;
unsigned short var_7 = (unsigned short)55803;
long long int var_8 = 2589391327798270676LL;
int var_9 = -931806096;
int zero = 0;
unsigned int var_10 = 482431114U;
short var_11 = (short)-3848;
int var_12 = -1855139290;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
