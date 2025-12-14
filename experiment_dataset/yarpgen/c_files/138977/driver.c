#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)33299;
unsigned long long int var_6 = 4248168792182621424ULL;
int var_10 = -916547828;
unsigned long long int var_13 = 10705531969584681234ULL;
long long int var_15 = -8831723822963551349LL;
int zero = 0;
unsigned char var_17 = (unsigned char)99;
unsigned short var_18 = (unsigned short)11434;
long long int var_19 = 2318740135589592626LL;
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
