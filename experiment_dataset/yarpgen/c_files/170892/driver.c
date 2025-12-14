#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7593765567955182614LL;
unsigned char var_4 = (unsigned char)206;
unsigned char var_7 = (unsigned char)251;
unsigned short var_8 = (unsigned short)41318;
unsigned long long int var_11 = 11037378710849071720ULL;
int zero = 0;
short var_12 = (short)-21942;
int var_13 = -1264938698;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
