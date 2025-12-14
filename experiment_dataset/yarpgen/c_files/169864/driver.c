#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 964878360810435355LL;
long long int var_1 = 3554516910889668444LL;
long long int var_2 = 734744748522018041LL;
signed char var_5 = (signed char)-10;
long long int var_6 = -8878517648229855324LL;
long long int var_8 = 6524716935444835767LL;
signed char var_9 = (signed char)-119;
int zero = 0;
long long int var_12 = -8323532384169396735LL;
short var_13 = (short)-26488;
unsigned long long int var_14 = 17153239134036768438ULL;
short var_15 = (short)11123;
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
