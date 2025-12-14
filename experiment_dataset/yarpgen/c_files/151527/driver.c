#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)34;
signed char var_1 = (signed char)-125;
unsigned long long int var_5 = 7921914529998226055ULL;
unsigned int var_7 = 4114341800U;
unsigned char var_9 = (unsigned char)136;
unsigned char var_10 = (unsigned char)48;
signed char var_11 = (signed char)-18;
unsigned char var_16 = (unsigned char)88;
signed char var_17 = (signed char)-10;
int zero = 0;
signed char var_18 = (signed char)-67;
long long int var_19 = 7949239626802869797LL;
void init() {
}

void checksum() {
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
