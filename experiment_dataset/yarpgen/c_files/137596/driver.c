#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4819301447226021475LL;
unsigned long long int var_2 = 11557137292643653253ULL;
signed char var_6 = (signed char)-66;
unsigned short var_7 = (unsigned short)19768;
unsigned long long int var_9 = 17462234365184633349ULL;
short var_10 = (short)-29496;
int zero = 0;
unsigned long long int var_11 = 14636192289974915818ULL;
unsigned short var_12 = (unsigned short)25636;
unsigned char var_13 = (unsigned char)10;
long long int var_14 = 7358006915619670785LL;
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
