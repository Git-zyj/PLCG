#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 207502635;
long long int var_6 = -6836234863677524206LL;
long long int var_8 = -3369762637006178842LL;
int var_14 = 2095583868;
unsigned char var_16 = (unsigned char)228;
int zero = 0;
unsigned long long int var_20 = 10323152778645803283ULL;
unsigned short var_21 = (unsigned short)26467;
void init() {
}

void checksum() {
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
