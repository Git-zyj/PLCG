#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-66;
signed char var_2 = (signed char)-113;
int var_6 = 240346468;
unsigned char var_8 = (unsigned char)141;
int zero = 0;
unsigned short var_10 = (unsigned short)41943;
long long int var_11 = -38956924947432596LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
