#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16041656783799748516ULL;
unsigned char var_3 = (unsigned char)150;
short var_4 = (short)-9893;
unsigned long long int var_5 = 447454989827709862ULL;
long long int var_6 = -7541395307090830478LL;
unsigned short var_7 = (unsigned short)13351;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 253030173698445714ULL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 59047004U;
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
