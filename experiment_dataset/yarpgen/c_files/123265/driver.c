#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3334;
short var_3 = (short)25502;
int var_4 = 1769263765;
long long int var_6 = 1816110987547668281LL;
int var_9 = 311632494;
int var_12 = -260890791;
int var_13 = 757687268;
unsigned long long int var_14 = 13059122536526676111ULL;
short var_15 = (short)-12932;
int zero = 0;
unsigned short var_16 = (unsigned short)36347;
int var_17 = 452467673;
void init() {
}

void checksum() {
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
