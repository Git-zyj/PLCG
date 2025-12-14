#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15492;
int var_3 = 2012749926;
unsigned long long int var_5 = 7563993860944121267ULL;
unsigned short var_7 = (unsigned short)49803;
int var_8 = 1372799247;
short var_9 = (short)31706;
int zero = 0;
long long int var_10 = -2051219263820150897LL;
long long int var_11 = -4959871530128007650LL;
int var_12 = 1208020915;
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
