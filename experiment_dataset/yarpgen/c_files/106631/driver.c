#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)99;
unsigned int var_4 = 786600859U;
signed char var_5 = (signed char)-108;
signed char var_7 = (signed char)-74;
unsigned long long int var_10 = 17424082457767656593ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)55158;
long long int var_15 = -51269142479803446LL;
unsigned long long int var_16 = 7874725187523102118ULL;
long long int var_17 = -1055979551241322998LL;
unsigned short var_18 = (unsigned short)23263;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
