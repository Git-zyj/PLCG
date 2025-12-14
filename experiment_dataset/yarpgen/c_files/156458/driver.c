#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 428810489U;
unsigned char var_3 = (unsigned char)69;
unsigned long long int var_4 = 3445452326285056975ULL;
unsigned short var_5 = (unsigned short)50185;
unsigned short var_6 = (unsigned short)55384;
long long int var_9 = -4250373820615863384LL;
signed char var_11 = (signed char)-105;
int zero = 0;
signed char var_19 = (signed char)38;
long long int var_20 = 5027482335057396114LL;
unsigned long long int var_21 = 5420027915155931333ULL;
int var_22 = 513989680;
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
