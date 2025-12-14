#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2961261156945592085ULL;
short var_3 = (short)30309;
long long int var_5 = -1899838955019244795LL;
long long int var_6 = -9124133644953734513LL;
unsigned long long int var_7 = 12287358559498511906ULL;
short var_8 = (short)8243;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)140;
short var_12 = (short)21293;
unsigned char var_13 = (unsigned char)111;
unsigned char var_14 = (unsigned char)27;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
