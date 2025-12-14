#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
unsigned long long int var_1 = 16946539098791777603ULL;
long long int var_7 = -2510501547420100730LL;
long long int var_12 = -1808443256942185115LL;
short var_13 = (short)-31278;
short var_14 = (short)16497;
int var_15 = 1218573675;
int zero = 0;
unsigned long long int var_16 = 7857814140003627941ULL;
short var_17 = (short)-26700;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
