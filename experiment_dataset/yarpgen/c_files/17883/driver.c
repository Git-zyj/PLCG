#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
short var_2 = (short)25869;
long long int var_3 = -14160241660349651LL;
unsigned char var_4 = (unsigned char)184;
unsigned long long int var_7 = 16045954013146906699ULL;
signed char var_8 = (signed char)-82;
int zero = 0;
int var_10 = -406438912;
unsigned long long int var_11 = 3783246004208796498ULL;
unsigned int var_12 = 2106407524U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
