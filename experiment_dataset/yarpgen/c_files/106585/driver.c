#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27688;
unsigned short var_2 = (unsigned short)57121;
short var_3 = (short)-22309;
long long int var_6 = -482989612693640865LL;
unsigned short var_8 = (unsigned short)39929;
long long int var_10 = -6875081186004886367LL;
unsigned int var_12 = 3306042442U;
short var_13 = (short)-3618;
long long int var_15 = -5184203178409378664LL;
int zero = 0;
long long int var_17 = -2858617209670804357LL;
unsigned long long int var_18 = 10581584450416705302ULL;
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
