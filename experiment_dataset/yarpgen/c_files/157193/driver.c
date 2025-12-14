#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8914556524203849512LL;
short var_1 = (short)15765;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-1057;
int var_9 = 1089278613;
int zero = 0;
int var_11 = -1502880103;
unsigned long long int var_12 = 5771687153004313206ULL;
unsigned long long int var_13 = 6561661405877252462ULL;
void init() {
}

void checksum() {
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
