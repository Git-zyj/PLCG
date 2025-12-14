#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3972140147569426617LL;
unsigned long long int var_4 = 8059448414839943536ULL;
long long int var_10 = 2522904694186550569LL;
unsigned char var_13 = (unsigned char)110;
int var_15 = -1992611433;
int zero = 0;
long long int var_19 = -1375366219907053497LL;
int var_20 = -16944319;
int var_21 = -1255077766;
unsigned long long int var_22 = 15788030625176185974ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
