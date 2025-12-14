#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1317716307527285123LL;
signed char var_2 = (signed char)17;
int var_3 = 295742198;
unsigned long long int var_4 = 9845899834132583096ULL;
short var_7 = (short)-15223;
unsigned short var_11 = (unsigned short)21877;
unsigned long long int var_16 = 7413401371969211209ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)63942;
long long int var_21 = -5760155916944198140LL;
unsigned char var_22 = (unsigned char)58;
unsigned long long int var_23 = 9870526815370598460ULL;
int var_24 = -991423402;
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
