#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)242;
unsigned short var_1 = (unsigned short)32112;
short var_3 = (short)-23603;
unsigned long long int var_4 = 13126389355292908522ULL;
short var_6 = (short)-15835;
unsigned short var_7 = (unsigned short)13973;
int zero = 0;
long long int var_11 = 7159847415068565944LL;
unsigned long long int var_12 = 10581377305285855693ULL;
signed char var_13 = (signed char)46;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
