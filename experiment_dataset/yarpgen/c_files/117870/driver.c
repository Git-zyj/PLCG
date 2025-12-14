#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15720859857119436133ULL;
int var_2 = 1593906698;
short var_3 = (short)-4810;
unsigned long long int var_4 = 1530923344757697254ULL;
signed char var_5 = (signed char)-117;
short var_8 = (short)-11103;
int zero = 0;
signed char var_10 = (signed char)31;
unsigned short var_11 = (unsigned short)29116;
int var_12 = 1635430820;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 8815962709305588930ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
