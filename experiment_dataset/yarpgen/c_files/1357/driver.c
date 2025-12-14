#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1215872497;
unsigned long long int var_1 = 8216775118760546934ULL;
unsigned char var_4 = (unsigned char)182;
signed char var_9 = (signed char)-118;
signed char var_10 = (signed char)-14;
unsigned char var_11 = (unsigned char)149;
unsigned long long int var_12 = 1716437845809127448ULL;
int zero = 0;
long long int var_13 = 202529700523137779LL;
unsigned long long int var_14 = 8096202784940088951ULL;
unsigned char var_15 = (unsigned char)12;
int var_16 = -1010729472;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
