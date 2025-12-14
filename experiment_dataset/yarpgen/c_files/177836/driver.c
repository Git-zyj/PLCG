#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)101;
unsigned char var_4 = (unsigned char)141;
int var_5 = -570588694;
unsigned long long int var_8 = 6715234315703847112ULL;
long long int var_10 = 8878615301064392737LL;
unsigned long long int var_13 = 11976225162183550317ULL;
signed char var_15 = (signed char)80;
int zero = 0;
long long int var_16 = -3089163578168408783LL;
unsigned int var_17 = 454892399U;
unsigned char var_18 = (unsigned char)217;
unsigned long long int var_19 = 2120374111626680721ULL;
long long int var_20 = -3820079087900505291LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
