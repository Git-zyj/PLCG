#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7655426081663236422ULL;
unsigned long long int var_11 = 8972333754917857140ULL;
long long int var_19 = -7136843869074022762LL;
int zero = 0;
unsigned char var_20 = (unsigned char)208;
unsigned int var_21 = 3336903270U;
short var_22 = (short)20168;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
