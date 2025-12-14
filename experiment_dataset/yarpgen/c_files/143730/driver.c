#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4651;
short var_2 = (short)-27575;
int var_4 = 1708027693;
long long int var_5 = -8910817297560489702LL;
unsigned char var_9 = (unsigned char)254;
int zero = 0;
unsigned long long int var_13 = 1618823766436156709ULL;
short var_14 = (short)23425;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
