#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17096193407939389340ULL;
unsigned long long int var_4 = 122468720236295453ULL;
signed char var_5 = (signed char)-28;
unsigned char var_6 = (unsigned char)22;
unsigned int var_9 = 1728725234U;
unsigned long long int var_11 = 6794020493285953048ULL;
unsigned int var_12 = 935838720U;
unsigned long long int var_15 = 9210963891013679090ULL;
int zero = 0;
signed char var_16 = (signed char)79;
unsigned long long int var_17 = 2554893617876473537ULL;
unsigned long long int var_18 = 4235896114130598557ULL;
unsigned char var_19 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
