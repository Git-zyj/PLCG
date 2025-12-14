#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_10 = (unsigned short)3359;
long long int var_13 = 9159113051759826576LL;
int zero = 0;
short var_18 = (short)-4182;
unsigned long long int var_19 = 7678130034523350407ULL;
unsigned short var_20 = (unsigned short)38390;
unsigned short var_21 = (unsigned short)11304;
short var_22 = (short)-19180;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
