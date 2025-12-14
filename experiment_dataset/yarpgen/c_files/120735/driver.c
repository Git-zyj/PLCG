#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3057;
short var_2 = (short)5174;
long long int var_3 = -7930110802804031238LL;
short var_7 = (short)-286;
signed char var_8 = (signed char)-105;
signed char var_9 = (signed char)-25;
int zero = 0;
unsigned long long int var_10 = 576612034780167310ULL;
short var_11 = (short)-14614;
long long int var_12 = -744135743473177492LL;
unsigned short var_13 = (unsigned short)57850;
long long int var_14 = 1651024496453841938LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
