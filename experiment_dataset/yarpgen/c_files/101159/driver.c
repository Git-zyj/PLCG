#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-93;
signed char var_2 = (signed char)-22;
short var_3 = (short)-13445;
long long int var_4 = 3710826224092093096LL;
short var_7 = (short)-6704;
int var_8 = -500546730;
unsigned char var_9 = (unsigned char)29;
signed char var_10 = (signed char)37;
long long int var_12 = 4239921271283899122LL;
unsigned int var_13 = 1169985119U;
int zero = 0;
unsigned char var_15 = (unsigned char)111;
unsigned long long int var_16 = 5066936445333552283ULL;
short var_17 = (short)27615;
signed char var_18 = (signed char)-32;
signed char var_19 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
