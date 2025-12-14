#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)6;
short var_2 = (short)-12932;
long long int var_6 = -6442822832045287799LL;
long long int var_7 = 6800204461285339559LL;
unsigned short var_10 = (unsigned short)2455;
unsigned long long int var_11 = 13042915138624988640ULL;
unsigned char var_12 = (unsigned char)15;
signed char var_14 = (signed char)67;
int zero = 0;
unsigned int var_17 = 1037818760U;
signed char var_18 = (signed char)-71;
long long int var_19 = 6416136475769207669LL;
int var_20 = -364538188;
long long int var_21 = -2816497675289742104LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
