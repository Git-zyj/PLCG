#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2847677983U;
unsigned char var_2 = (unsigned char)130;
signed char var_3 = (signed char)-39;
long long int var_4 = 7255783288896285030LL;
signed char var_9 = (signed char)37;
long long int var_13 = 8388895577412411090LL;
int zero = 0;
unsigned int var_14 = 3817566836U;
unsigned char var_15 = (unsigned char)210;
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
