#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)155;
short var_2 = (short)26078;
unsigned short var_6 = (unsigned short)36068;
_Bool var_10 = (_Bool)1;
unsigned int var_16 = 3825547112U;
int zero = 0;
int var_19 = 966700233;
long long int var_20 = -3956774123526822460LL;
void init() {
}

void checksum() {
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
