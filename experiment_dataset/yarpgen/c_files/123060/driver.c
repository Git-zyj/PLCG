#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8172668901156313720LL;
long long int var_6 = -1442854931029313450LL;
short var_7 = (short)19806;
long long int var_8 = 1916824629624011864LL;
int var_16 = 339995825;
int zero = 0;
short var_19 = (short)-13668;
unsigned char var_20 = (unsigned char)94;
long long int var_21 = 3226956609362367978LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
