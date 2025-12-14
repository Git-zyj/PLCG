#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22397;
unsigned long long int var_2 = 10598983948611146010ULL;
unsigned short var_4 = (unsigned short)58753;
long long int var_5 = 6742685646519152048LL;
long long int var_6 = 8307417244764495815LL;
signed char var_9 = (signed char)-55;
short var_10 = (short)-22622;
unsigned char var_12 = (unsigned char)49;
short var_15 = (short)-21584;
short var_16 = (short)-9206;
signed char var_17 = (signed char)124;
long long int var_19 = -7560298007223389393LL;
int zero = 0;
short var_20 = (short)25051;
unsigned short var_21 = (unsigned short)15870;
unsigned short var_22 = (unsigned short)31063;
unsigned char var_23 = (unsigned char)62;
unsigned char var_24 = (unsigned char)177;
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
