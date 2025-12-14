#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)35;
unsigned short var_3 = (unsigned short)42305;
unsigned short var_4 = (unsigned short)21797;
unsigned long long int var_5 = 15696505640465740153ULL;
unsigned short var_6 = (unsigned short)32345;
int var_8 = -2078040477;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 1308391853U;
long long int var_11 = -4171848076019516364LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
