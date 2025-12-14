#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16721730469528064015ULL;
unsigned int var_1 = 417441446U;
signed char var_3 = (signed char)-57;
long long int var_4 = -494140688298041060LL;
unsigned char var_6 = (unsigned char)38;
signed char var_8 = (signed char)111;
unsigned short var_10 = (unsigned short)12645;
int var_12 = 1964576358;
unsigned int var_15 = 291650100U;
unsigned long long int var_17 = 16715665369979108072ULL;
int zero = 0;
short var_20 = (short)2367;
long long int var_21 = 1765782956118941357LL;
signed char var_22 = (signed char)35;
unsigned short var_23 = (unsigned short)16148;
signed char var_24 = (signed char)124;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
