#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2021754481;
long long int var_1 = 141610912778220900LL;
short var_2 = (short)-20487;
_Bool var_3 = (_Bool)0;
long long int var_4 = -1801599999872952227LL;
unsigned char var_5 = (unsigned char)53;
int var_6 = 1207463925;
int var_7 = 2083947492;
unsigned int var_9 = 2565343143U;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_12 = (short)-10365;
unsigned short var_13 = (unsigned short)28911;
short var_14 = (short)-3584;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
