#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3551329542U;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 13907653620237608664ULL;
unsigned long long int var_10 = 15098604665636077126ULL;
unsigned long long int var_12 = 5484683418530326988ULL;
signed char var_15 = (signed char)13;
unsigned short var_16 = (unsigned short)6548;
int var_17 = 2050930678;
int zero = 0;
unsigned long long int var_18 = 12102104251959216455ULL;
unsigned long long int var_19 = 13335312206549309774ULL;
long long int var_20 = 5210445847648759373LL;
void init() {
}

void checksum() {
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
