#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16524;
long long int var_3 = -8398431664498650722LL;
int var_7 = -1054021497;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)63;
unsigned long long int var_13 = 2173200102823504331ULL;
long long int var_16 = 2431909226828138413LL;
int zero = 0;
long long int var_20 = 6594593948229775343LL;
unsigned int var_21 = 1474983741U;
int var_22 = 585277897;
signed char var_23 = (signed char)-44;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
