#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6624010921855718930ULL;
int var_4 = -1650466219;
long long int var_5 = 5339135668992262714LL;
signed char var_7 = (signed char)-27;
short var_9 = (short)-11049;
long long int var_11 = -628115308391255701LL;
int var_15 = -1873688692;
int var_17 = -1669337776;
int zero = 0;
unsigned int var_20 = 2179657376U;
signed char var_21 = (signed char)111;
long long int var_22 = -7172351102567218842LL;
void init() {
}

void checksum() {
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
