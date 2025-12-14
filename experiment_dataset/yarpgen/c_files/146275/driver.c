#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5067922468308380589ULL;
signed char var_2 = (signed char)109;
unsigned long long int var_3 = 2350570022632325987ULL;
unsigned char var_4 = (unsigned char)110;
int var_5 = -1079489226;
unsigned short var_6 = (unsigned short)26495;
int var_7 = -608338258;
int var_8 = 1137581176;
int var_9 = 1147563630;
int zero = 0;
unsigned long long int var_10 = 17370477986600181164ULL;
unsigned int var_11 = 1631467680U;
int var_12 = -748297081;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
