#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -790531594;
int var_4 = 625692714;
unsigned short var_7 = (unsigned short)37693;
unsigned long long int var_9 = 12058144413181855087ULL;
int zero = 0;
unsigned long long int var_12 = 14981002635165780701ULL;
unsigned long long int var_13 = 6125365087968829836ULL;
unsigned char var_14 = (unsigned char)60;
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
