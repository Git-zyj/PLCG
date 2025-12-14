#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3084;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)153;
unsigned char var_7 = (unsigned char)214;
unsigned int var_8 = 4182917461U;
long long int var_9 = -5233531698622801841LL;
unsigned char var_10 = (unsigned char)106;
signed char var_11 = (signed char)-103;
int zero = 0;
unsigned short var_12 = (unsigned short)16736;
unsigned short var_13 = (unsigned short)34923;
void init() {
}

void checksum() {
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
