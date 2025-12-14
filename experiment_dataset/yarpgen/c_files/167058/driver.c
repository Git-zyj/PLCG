#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)4;
long long int var_1 = -903055849139442513LL;
unsigned short var_4 = (unsigned short)31315;
int var_6 = -1480586280;
unsigned short var_7 = (unsigned short)57032;
int var_12 = -300017579;
unsigned short var_13 = (unsigned short)27612;
unsigned char var_14 = (unsigned char)220;
int zero = 0;
signed char var_15 = (signed char)-71;
signed char var_16 = (signed char)-74;
unsigned short var_17 = (unsigned short)182;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
