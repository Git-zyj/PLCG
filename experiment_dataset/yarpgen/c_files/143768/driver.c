#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-30;
long long int var_2 = 5679898019988771181LL;
long long int var_3 = 5514115613249804093LL;
short var_4 = (short)24520;
unsigned int var_5 = 2922024769U;
signed char var_7 = (signed char)-101;
signed char var_9 = (signed char)105;
unsigned long long int var_11 = 17023394782792820609ULL;
unsigned short var_13 = (unsigned short)18930;
long long int var_14 = -8957708227057279817LL;
int zero = 0;
long long int var_15 = -8390422304339211854LL;
long long int var_16 = 6588140605417374217LL;
unsigned short var_17 = (unsigned short)8545;
unsigned long long int var_18 = 17727470167380976094ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
