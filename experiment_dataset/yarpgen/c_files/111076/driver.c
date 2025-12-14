#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-67;
unsigned char var_2 = (unsigned char)84;
long long int var_7 = 2189554006397874149LL;
unsigned char var_9 = (unsigned char)168;
unsigned long long int var_10 = 17544705292975474760ULL;
unsigned short var_11 = (unsigned short)27169;
unsigned long long int var_15 = 381777316889555861ULL;
int zero = 0;
int var_17 = 964891132;
unsigned char var_18 = (unsigned char)77;
unsigned char var_19 = (unsigned char)90;
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
