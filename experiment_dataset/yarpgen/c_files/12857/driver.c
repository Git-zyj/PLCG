#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -894800514;
unsigned int var_2 = 2132317823U;
long long int var_3 = 4083002041896890521LL;
short var_8 = (short)15206;
int zero = 0;
unsigned short var_15 = (unsigned short)19269;
unsigned long long int var_16 = 15407154683723970080ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
