#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-26854;
long long int var_5 = -6812112791911558127LL;
unsigned short var_7 = (unsigned short)38695;
int zero = 0;
long long int var_13 = 4702885459125916508LL;
short var_14 = (short)-9056;
int var_15 = -1153408651;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
