#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)9643;
short var_9 = (short)-3957;
unsigned char var_13 = (unsigned char)185;
unsigned int var_14 = 527439683U;
unsigned int var_15 = 2807456807U;
unsigned int var_18 = 2806644449U;
int zero = 0;
long long int var_19 = -2522566806473338364LL;
unsigned int var_20 = 1309002442U;
unsigned char var_21 = (unsigned char)138;
signed char var_22 = (signed char)-40;
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
