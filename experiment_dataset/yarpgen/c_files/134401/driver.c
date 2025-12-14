#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
unsigned char var_1 = (unsigned char)166;
signed char var_2 = (signed char)-29;
unsigned char var_4 = (unsigned char)82;
unsigned long long int var_5 = 7706199275442662662ULL;
unsigned int var_6 = 1464621639U;
signed char var_7 = (signed char)-53;
unsigned char var_9 = (unsigned char)235;
unsigned long long int var_10 = 16636033509814786232ULL;
int var_13 = -1254841730;
unsigned int var_16 = 1785338394U;
int zero = 0;
unsigned long long int var_17 = 17160145050797288531ULL;
unsigned char var_18 = (unsigned char)57;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
