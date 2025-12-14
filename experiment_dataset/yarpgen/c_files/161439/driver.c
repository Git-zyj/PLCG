#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)111;
long long int var_3 = -637575924309997719LL;
int var_4 = 1328299617;
short var_6 = (short)-21592;
int var_8 = 1167624836;
unsigned char var_9 = (unsigned char)4;
int zero = 0;
unsigned char var_14 = (unsigned char)158;
int var_15 = -1696817440;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
