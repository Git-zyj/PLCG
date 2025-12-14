#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-6;
int var_1 = -1249271241;
unsigned char var_2 = (unsigned char)17;
int var_5 = 1494364592;
long long int var_7 = -6394361170566377631LL;
signed char var_8 = (signed char)112;
signed char var_9 = (signed char)127;
long long int var_10 = 7104349717055004740LL;
int zero = 0;
short var_11 = (short)-16929;
short var_12 = (short)12524;
unsigned char var_13 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
