#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1810350823;
unsigned char var_4 = (unsigned char)85;
int var_6 = -460786636;
long long int var_11 = -8349193038312051826LL;
int var_13 = -1729203986;
int zero = 0;
short var_19 = (short)4478;
unsigned short var_20 = (unsigned short)63267;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
