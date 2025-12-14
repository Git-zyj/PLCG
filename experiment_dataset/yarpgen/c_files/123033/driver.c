#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1014555088;
short var_5 = (short)15198;
unsigned short var_6 = (unsigned short)12924;
long long int var_9 = 1232347276510929388LL;
int zero = 0;
unsigned char var_10 = (unsigned char)222;
long long int var_11 = 8984572919638210560LL;
unsigned long long int var_12 = 18199808785914657672ULL;
long long int var_13 = 2262403934435417105LL;
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
