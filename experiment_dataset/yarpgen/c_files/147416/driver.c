#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7674233522889071670ULL;
signed char var_4 = (signed char)61;
unsigned long long int var_6 = 6933497281918608396ULL;
unsigned short var_7 = (unsigned short)32566;
unsigned long long int var_8 = 1249835865018787216ULL;
signed char var_9 = (signed char)120;
int zero = 0;
short var_17 = (short)4062;
unsigned long long int var_18 = 11901332078285176910ULL;
unsigned long long int var_19 = 6263679044657508651ULL;
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
