#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)55965;
signed char var_6 = (signed char)26;
short var_7 = (short)30353;
unsigned short var_8 = (unsigned short)44087;
unsigned char var_9 = (unsigned char)218;
unsigned short var_10 = (unsigned short)21831;
int zero = 0;
unsigned char var_12 = (unsigned char)44;
unsigned long long int var_13 = 10573958372935682586ULL;
unsigned short var_14 = (unsigned short)35181;
long long int var_15 = -5982681670190468473LL;
int var_16 = -117812411;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
