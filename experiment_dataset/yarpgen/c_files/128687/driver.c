#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_3 = -7259370280758768561LL;
unsigned char var_7 = (unsigned char)225;
unsigned long long int var_9 = 5959432701246812140ULL;
int zero = 0;
short var_14 = (short)16783;
unsigned long long int var_15 = 3564711523138854946ULL;
void init() {
}

void checksum() {
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
