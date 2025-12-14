#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-117;
unsigned char var_3 = (unsigned char)98;
short var_6 = (short)19457;
short var_14 = (short)-13414;
unsigned char var_15 = (unsigned char)175;
long long int var_16 = -1589446592989988248LL;
int zero = 0;
signed char var_19 = (signed char)-27;
unsigned long long int var_20 = 10239342461399833559ULL;
unsigned char var_21 = (unsigned char)211;
signed char var_22 = (signed char)125;
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
