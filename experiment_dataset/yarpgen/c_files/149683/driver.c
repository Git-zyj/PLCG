#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27088;
short var_2 = (short)-20176;
short var_4 = (short)-22256;
unsigned short var_5 = (unsigned short)16590;
short var_8 = (short)-5797;
long long int var_9 = 5747752582931766863LL;
int zero = 0;
short var_10 = (short)-5702;
short var_11 = (short)-10582;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
