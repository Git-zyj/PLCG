#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4278021548949747062LL;
long long int var_2 = 107423003635562442LL;
unsigned char var_3 = (unsigned char)60;
unsigned short var_7 = (unsigned short)20289;
unsigned char var_8 = (unsigned char)113;
unsigned long long int var_9 = 2587785277643115655ULL;
unsigned char var_11 = (unsigned char)3;
int zero = 0;
unsigned short var_13 = (unsigned short)58726;
int var_14 = -22612869;
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
