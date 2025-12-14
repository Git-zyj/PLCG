#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15383043063074240047ULL;
long long int var_18 = -8507085107030272718LL;
int zero = 0;
unsigned char var_19 = (unsigned char)180;
unsigned long long int var_20 = 905541405366727639ULL;
signed char var_21 = (signed char)92;
int var_22 = 1144960687;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
