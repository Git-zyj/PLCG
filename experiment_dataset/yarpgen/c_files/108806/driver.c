#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41462;
short var_3 = (short)-17970;
unsigned long long int var_4 = 1540366340335533191ULL;
long long int var_6 = -10369929684078969LL;
unsigned int var_9 = 1838706141U;
int var_10 = 719395118;
unsigned short var_11 = (unsigned short)43314;
int zero = 0;
unsigned long long int var_12 = 15178309546826837200ULL;
unsigned long long int var_13 = 13892825773247076967ULL;
short var_14 = (short)6015;
int var_15 = 1020984416;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
