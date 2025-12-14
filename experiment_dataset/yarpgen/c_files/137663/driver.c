#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2396775546U;
unsigned int var_2 = 916819447U;
signed char var_3 = (signed char)-10;
unsigned int var_5 = 3333628379U;
unsigned int var_6 = 4054790851U;
unsigned long long int var_8 = 10882807371434783718ULL;
int zero = 0;
short var_10 = (short)7100;
long long int var_11 = -8168162756199124756LL;
unsigned char var_12 = (unsigned char)148;
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
