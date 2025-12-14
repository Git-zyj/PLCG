#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1333519335;
int var_1 = 979759933;
long long int var_2 = -6324636979211489476LL;
unsigned long long int var_3 = 7135868817798904089ULL;
unsigned short var_5 = (unsigned short)4675;
long long int var_6 = 7667830648023576222LL;
unsigned long long int var_7 = 17364297884249134258ULL;
unsigned long long int var_8 = 977599764796365012ULL;
int zero = 0;
unsigned int var_10 = 2782319857U;
short var_11 = (short)18761;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
