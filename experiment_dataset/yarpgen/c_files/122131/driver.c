#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1325248153;
long long int var_2 = 8608985139480343739LL;
unsigned long long int var_4 = 15485130284743986654ULL;
unsigned long long int var_6 = 17427932601717106302ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3376719363U;
unsigned short var_13 = (unsigned short)32327;
int var_15 = -714730973;
unsigned int var_17 = 3789364022U;
int zero = 0;
unsigned long long int var_19 = 4558035461629752901ULL;
signed char var_20 = (signed char)51;
short var_21 = (short)-4245;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
