#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2017112822144601068LL;
unsigned char var_3 = (unsigned char)84;
short var_4 = (short)24315;
unsigned char var_6 = (unsigned char)206;
unsigned char var_9 = (unsigned char)86;
unsigned char var_10 = (unsigned char)137;
int var_12 = 134795816;
unsigned char var_13 = (unsigned char)49;
int var_16 = 881864762;
short var_17 = (short)32727;
int zero = 0;
unsigned char var_20 = (unsigned char)255;
unsigned long long int var_21 = 1592157695573477317ULL;
int var_22 = -1263224170;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
