#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)67;
unsigned char var_1 = (unsigned char)167;
long long int var_2 = 2687733219306592616LL;
unsigned short var_3 = (unsigned short)3241;
long long int var_4 = -7971259405783454943LL;
unsigned short var_6 = (unsigned short)59669;
unsigned long long int var_9 = 7122586364697649631ULL;
int var_14 = -258493523;
int zero = 0;
signed char var_15 = (signed char)68;
unsigned char var_16 = (unsigned char)15;
void init() {
}

void checksum() {
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
