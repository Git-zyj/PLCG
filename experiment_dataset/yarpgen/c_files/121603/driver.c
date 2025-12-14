#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)440;
long long int var_4 = 1079246232081492233LL;
short var_6 = (short)-28920;
unsigned long long int var_10 = 3915639620688539166ULL;
int zero = 0;
unsigned long long int var_13 = 14028383391264357383ULL;
unsigned long long int var_14 = 5171002380162384597ULL;
long long int var_15 = -5140162641006781900LL;
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
