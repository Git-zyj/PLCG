#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5617044871703644740ULL;
unsigned long long int var_2 = 10744703667335197626ULL;
int var_5 = 1946297484;
signed char var_6 = (signed char)-122;
unsigned long long int var_9 = 9708730740389859234ULL;
unsigned char var_12 = (unsigned char)150;
int zero = 0;
short var_13 = (short)-2125;
long long int var_14 = 6456933855474831553LL;
void init() {
}

void checksum() {
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
