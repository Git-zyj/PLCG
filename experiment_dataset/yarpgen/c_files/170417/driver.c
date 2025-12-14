#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-747;
short var_3 = (short)23449;
short var_7 = (short)-23502;
long long int var_10 = -4189769720617202413LL;
short var_11 = (short)-26120;
long long int var_17 = -3005592910832803392LL;
int zero = 0;
long long int var_18 = 7409343745497267380LL;
unsigned long long int var_19 = 2032711581716053958ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
