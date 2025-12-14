#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25860;
short var_2 = (short)28804;
unsigned long long int var_3 = 7197180960115686276ULL;
unsigned short var_5 = (unsigned short)14151;
unsigned char var_7 = (unsigned char)194;
long long int var_8 = 4692878593958147912LL;
int var_9 = -1977170354;
int zero = 0;
unsigned char var_11 = (unsigned char)98;
unsigned int var_12 = 113424163U;
unsigned long long int var_13 = 16659351372327314788ULL;
signed char var_14 = (signed char)-113;
void init() {
}

void checksum() {
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
