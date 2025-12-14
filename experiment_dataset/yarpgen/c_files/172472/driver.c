#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-86;
unsigned long long int var_3 = 8174183579732355449ULL;
signed char var_5 = (signed char)79;
unsigned char var_13 = (unsigned char)221;
int zero = 0;
unsigned long long int var_17 = 3940872488223046407ULL;
short var_18 = (short)-4442;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
