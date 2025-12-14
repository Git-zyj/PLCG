#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)115;
signed char var_9 = (signed char)-12;
long long int var_10 = -6714609275207679244LL;
unsigned char var_11 = (unsigned char)7;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 771045122061765979ULL;
unsigned int var_15 = 1705889535U;
int var_16 = 1669512738;
int zero = 0;
int var_19 = 1937353697;
signed char var_20 = (signed char)68;
void init() {
}

void checksum() {
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
