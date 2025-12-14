#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1306719707U;
signed char var_7 = (signed char)79;
signed char var_8 = (signed char)89;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)16992;
int zero = 0;
short var_11 = (short)5264;
unsigned long long int var_12 = 13260086661594598027ULL;
long long int var_13 = 3021030560916968897LL;
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
