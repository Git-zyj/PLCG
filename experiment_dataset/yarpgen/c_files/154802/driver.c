#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41666;
unsigned short var_3 = (unsigned short)61948;
signed char var_5 = (signed char)26;
long long int var_15 = -9033663167833058960LL;
int zero = 0;
long long int var_16 = -8780867905598103122LL;
signed char var_17 = (signed char)40;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
