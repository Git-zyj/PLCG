#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 500174988U;
unsigned int var_2 = 3933312238U;
unsigned long long int var_7 = 3645898254094177348ULL;
signed char var_8 = (signed char)-92;
short var_10 = (short)26095;
unsigned long long int var_12 = 11410510262756644368ULL;
int zero = 0;
long long int var_13 = 1483708346486237455LL;
signed char var_14 = (signed char)34;
long long int var_15 = 1095791442274782673LL;
short var_16 = (short)21109;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
