#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3334322153139316003ULL;
unsigned char var_3 = (unsigned char)137;
unsigned long long int var_5 = 1441215193894730991ULL;
long long int var_6 = -7043663168505978531LL;
signed char var_7 = (signed char)-120;
short var_8 = (short)27536;
int zero = 0;
unsigned char var_14 = (unsigned char)79;
long long int var_15 = 2457159012042602652LL;
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
