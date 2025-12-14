#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3219996762U;
int var_4 = -1568713656;
int var_8 = 1794879654;
_Bool var_11 = (_Bool)1;
int var_13 = -321005413;
int zero = 0;
unsigned int var_18 = 3542815150U;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 136093380U;
int var_21 = -1216153088;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
