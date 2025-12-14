#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)26653;
signed char var_4 = (signed char)104;
int var_11 = 720155761;
unsigned long long int var_12 = 3490072272416093061ULL;
unsigned char var_16 = (unsigned char)160;
int zero = 0;
unsigned char var_17 = (unsigned char)224;
int var_18 = 723428002;
signed char var_19 = (signed char)118;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
