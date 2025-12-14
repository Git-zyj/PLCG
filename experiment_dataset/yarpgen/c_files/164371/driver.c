#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -671058117;
unsigned char var_3 = (unsigned char)174;
unsigned long long int var_6 = 1875321607297842140ULL;
long long int var_16 = -7689219899274146018LL;
int zero = 0;
unsigned short var_19 = (unsigned short)51598;
signed char var_20 = (signed char)85;
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
