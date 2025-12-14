#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)180;
long long int var_1 = -6915383863394330315LL;
unsigned char var_2 = (unsigned char)84;
unsigned char var_4 = (unsigned char)156;
long long int var_6 = 2300237851350457199LL;
int var_7 = 20606689;
unsigned char var_8 = (unsigned char)92;
int var_11 = -1941491227;
int var_12 = -86258625;
int zero = 0;
unsigned char var_13 = (unsigned char)82;
unsigned long long int var_14 = 18062423436998324207ULL;
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
