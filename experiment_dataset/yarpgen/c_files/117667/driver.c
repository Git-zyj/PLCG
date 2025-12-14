#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27765;
signed char var_1 = (signed char)99;
unsigned long long int var_3 = 1608893122834279638ULL;
unsigned long long int var_4 = 9130421250446230587ULL;
unsigned char var_5 = (unsigned char)244;
long long int var_12 = -4828516419576127054LL;
int zero = 0;
short var_13 = (short)5006;
unsigned char var_14 = (unsigned char)138;
long long int var_15 = -8683003833301879245LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
