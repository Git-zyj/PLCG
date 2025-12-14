#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)91;
signed char var_2 = (signed char)-58;
unsigned int var_3 = 1871893327U;
unsigned short var_4 = (unsigned short)17904;
signed char var_8 = (signed char)50;
unsigned short var_9 = (unsigned short)57270;
short var_11 = (short)-27580;
signed char var_14 = (signed char)118;
int zero = 0;
int var_16 = -1927297179;
long long int var_17 = 6245164470206070437LL;
signed char var_18 = (signed char)-116;
short var_19 = (short)-18233;
void init() {
}

void checksum() {
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
