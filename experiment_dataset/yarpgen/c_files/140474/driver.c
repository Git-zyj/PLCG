#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48237;
short var_2 = (short)16703;
unsigned short var_3 = (unsigned short)17243;
unsigned int var_4 = 3201895432U;
unsigned short var_6 = (unsigned short)9055;
unsigned short var_7 = (unsigned short)23813;
int var_9 = -728259674;
int zero = 0;
short var_10 = (short)17159;
unsigned int var_11 = 1230691859U;
short var_12 = (short)11177;
unsigned short var_13 = (unsigned short)39764;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
