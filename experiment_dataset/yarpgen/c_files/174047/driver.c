#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3478778987519411418LL;
short var_5 = (short)-2171;
unsigned short var_7 = (unsigned short)12645;
long long int var_8 = -5499824603372403768LL;
int zero = 0;
int var_12 = 262411754;
long long int var_13 = 4311508179092919502LL;
long long int var_14 = -2454721692250185656LL;
void init() {
}

void checksum() {
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
