#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13681308346705190001ULL;
unsigned char var_1 = (unsigned char)62;
unsigned long long int var_2 = 11381734474012591202ULL;
unsigned long long int var_6 = 7986164390891512734ULL;
unsigned int var_10 = 382490492U;
unsigned short var_12 = (unsigned short)45655;
unsigned long long int var_14 = 16614734195220131840ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)38471;
unsigned long long int var_19 = 12469707799335011097ULL;
unsigned int var_20 = 3542737781U;
unsigned short var_21 = (unsigned short)18792;
unsigned long long int var_22 = 14778545672582611117ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
