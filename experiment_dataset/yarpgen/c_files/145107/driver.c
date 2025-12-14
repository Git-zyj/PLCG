#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1923786327U;
short var_1 = (short)25371;
short var_2 = (short)-27351;
unsigned long long int var_3 = 4572476633135064890ULL;
unsigned int var_5 = 442574327U;
unsigned long long int var_6 = 3873043788452445367ULL;
unsigned long long int var_7 = 3810810834379144751ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)3718;
unsigned long long int var_12 = 17218781616631411015ULL;
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
