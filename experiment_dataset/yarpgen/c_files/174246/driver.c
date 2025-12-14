#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8865077591270931920ULL;
unsigned int var_4 = 1105328744U;
unsigned long long int var_8 = 13540684726239097389ULL;
unsigned int var_9 = 3694221369U;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2990562843U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
