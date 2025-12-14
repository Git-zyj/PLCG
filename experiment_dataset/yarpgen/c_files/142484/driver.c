#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1598229525928284494ULL;
short var_5 = (short)-3336;
long long int var_9 = -594689970190515416LL;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)57;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-4308;
unsigned char var_14 = (unsigned char)164;
long long int var_15 = -3559640796567211092LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
