#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -1543154147373432074LL;
long long int var_10 = -8840015532425537626LL;
long long int var_11 = 205000366751327079LL;
int var_13 = -1762232446;
int var_16 = 182047501;
int zero = 0;
unsigned char var_17 = (unsigned char)47;
long long int var_18 = -5742632193900423930LL;
unsigned long long int var_19 = 2123327094749227490ULL;
unsigned char var_20 = (unsigned char)59;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
