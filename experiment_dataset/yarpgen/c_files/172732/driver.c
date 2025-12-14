#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11499;
unsigned char var_5 = (unsigned char)26;
short var_6 = (short)-7917;
int var_9 = 515923457;
unsigned long long int var_13 = 13198025018002475780ULL;
unsigned short var_16 = (unsigned short)33040;
int zero = 0;
unsigned char var_18 = (unsigned char)128;
unsigned long long int var_19 = 8829273363341628838ULL;
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
