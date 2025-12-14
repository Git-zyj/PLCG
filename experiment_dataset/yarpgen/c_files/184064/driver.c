#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15487765540648498691ULL;
unsigned char var_4 = (unsigned char)179;
short var_7 = (short)-2547;
int var_12 = 2066995895;
unsigned long long int var_14 = 11415020496371285963ULL;
int zero = 0;
unsigned long long int var_15 = 13487546603152783027ULL;
int var_16 = 172347365;
int var_17 = -1931256744;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
