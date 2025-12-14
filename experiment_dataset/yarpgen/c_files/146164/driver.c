#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1541006859141882267ULL;
int var_1 = -865902511;
signed char var_2 = (signed char)-92;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-72;
short var_7 = (short)-12945;
int var_8 = 1394679871;
unsigned short var_9 = (unsigned short)53957;
short var_10 = (short)25937;
signed char var_11 = (signed char)-23;
int zero = 0;
long long int var_12 = 1781373976317042618LL;
unsigned char var_13 = (unsigned char)231;
unsigned char var_14 = (unsigned char)220;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
