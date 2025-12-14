#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13174185102039615548ULL;
unsigned char var_2 = (unsigned char)89;
long long int var_4 = -6694092699624187386LL;
short var_6 = (short)27885;
signed char var_7 = (signed char)(-127 - 1);
unsigned long long int var_8 = 7991881947638114822ULL;
unsigned long long int var_10 = 8426483591299573271ULL;
int zero = 0;
int var_11 = 1324831470;
short var_12 = (short)15195;
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
