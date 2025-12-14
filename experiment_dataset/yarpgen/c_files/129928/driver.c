#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)26;
unsigned char var_2 = (unsigned char)26;
unsigned char var_4 = (unsigned char)91;
unsigned char var_8 = (unsigned char)104;
unsigned char var_9 = (unsigned char)186;
signed char var_10 = (signed char)-11;
int var_11 = 1318199841;
int zero = 0;
signed char var_15 = (signed char)-91;
unsigned char var_16 = (unsigned char)25;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)157;
unsigned char var_19 = (unsigned char)142;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
