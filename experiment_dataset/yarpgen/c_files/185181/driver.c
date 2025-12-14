#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1134738466230943592ULL;
unsigned char var_12 = (unsigned char)176;
long long int var_13 = 7393402700361184833LL;
int zero = 0;
long long int var_20 = 6710040660444268517LL;
long long int var_21 = 6506619615337457774LL;
signed char var_22 = (signed char)-14;
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
