#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6872806442816837963LL;
int var_4 = -1888013794;
long long int var_7 = -5818284783996206190LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -3821424096672282664LL;
long long int var_11 = -1442461836285436192LL;
int var_12 = 196433275;
short var_13 = (short)-18530;
int zero = 0;
short var_14 = (short)-12721;
long long int var_15 = 7381303188396946544LL;
int var_16 = 1977818008;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
