#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4587;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)200;
int var_5 = 1076863660;
int var_6 = -2137526112;
unsigned char var_9 = (unsigned char)57;
int zero = 0;
unsigned char var_10 = (unsigned char)223;
int var_11 = -1948920087;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 9028629579507189675ULL;
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
