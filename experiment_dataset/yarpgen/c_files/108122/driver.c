#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1756008949;
long long int var_7 = 160992275035278584LL;
long long int var_10 = 8005004920031934932LL;
long long int var_13 = -1045381447792515348LL;
int zero = 0;
unsigned long long int var_18 = 2576384159984022849ULL;
unsigned short var_19 = (unsigned short)56042;
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
