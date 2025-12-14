#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)113;
unsigned int var_3 = 774459859U;
unsigned short var_5 = (unsigned short)54096;
short var_8 = (short)-28395;
long long int var_9 = -1214352314101201275LL;
int zero = 0;
signed char var_10 = (signed char)74;
short var_11 = (short)-2147;
int var_12 = -1052530327;
unsigned long long int var_13 = 9317152814714499644ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
