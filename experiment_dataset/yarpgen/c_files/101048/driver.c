#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)108;
short var_3 = (short)-13950;
long long int var_4 = 4221332024093188900LL;
unsigned long long int var_5 = 7074754158492757412ULL;
short var_6 = (short)14369;
int var_10 = -1549606578;
short var_12 = (short)9097;
short var_13 = (short)-10693;
unsigned long long int var_14 = 11394397080423203774ULL;
unsigned long long int var_15 = 17174123500577437939ULL;
int zero = 0;
long long int var_19 = -1025351454323174906LL;
unsigned long long int var_20 = 12250728235385157677ULL;
unsigned long long int var_21 = 6397229834684089598ULL;
unsigned char var_22 = (unsigned char)200;
signed char var_23 = (signed char)77;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
