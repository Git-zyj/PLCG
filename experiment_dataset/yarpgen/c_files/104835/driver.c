#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
signed char var_1 = (signed char)34;
unsigned short var_2 = (unsigned short)42387;
unsigned short var_3 = (unsigned short)1430;
unsigned short var_4 = (unsigned short)43727;
unsigned long long int var_5 = 2711074313720562187ULL;
unsigned short var_8 = (unsigned short)53563;
unsigned short var_9 = (unsigned short)37806;
int zero = 0;
signed char var_11 = (signed char)26;
signed char var_12 = (signed char)3;
unsigned char var_13 = (unsigned char)238;
int var_14 = -530875784;
signed char var_15 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
