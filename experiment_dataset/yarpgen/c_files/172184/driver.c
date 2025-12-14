#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29497;
long long int var_2 = -2261169962471041136LL;
long long int var_4 = -8802564320194142068LL;
unsigned short var_6 = (unsigned short)4820;
short var_9 = (short)-12529;
int zero = 0;
unsigned long long int var_11 = 5142776656585789747ULL;
unsigned char var_12 = (unsigned char)22;
void init() {
}

void checksum() {
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
