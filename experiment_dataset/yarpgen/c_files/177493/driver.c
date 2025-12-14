#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2747594214U;
long long int var_3 = -5647744559519929388LL;
long long int var_4 = -7730785006432680306LL;
long long int var_5 = -3131614608028464045LL;
int var_7 = -1030451100;
unsigned int var_12 = 3117959836U;
int var_13 = -389687103;
int zero = 0;
int var_14 = 899705813;
long long int var_15 = -2818171738864054992LL;
unsigned char var_16 = (unsigned char)159;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
