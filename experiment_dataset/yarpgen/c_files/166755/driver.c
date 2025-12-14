#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-16;
unsigned int var_3 = 2447862577U;
long long int var_4 = 8089942961127069503LL;
int var_5 = 1922487020;
long long int var_7 = -3748653734365735593LL;
_Bool var_9 = (_Bool)0;
long long int var_13 = -8358075341994404649LL;
unsigned char var_18 = (unsigned char)220;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)81;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 7400279068297533747ULL;
unsigned int var_24 = 3646601793U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
