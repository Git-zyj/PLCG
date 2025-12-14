#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3043065130194609225LL;
long long int var_4 = 6194645438832207634LL;
short var_5 = (short)3877;
unsigned long long int var_6 = 1715818509692580151ULL;
int var_7 = 1578056137;
unsigned short var_9 = (unsigned short)36277;
unsigned long long int var_11 = 12912122552917313803ULL;
unsigned long long int var_15 = 3304368983860617022ULL;
int zero = 0;
short var_16 = (short)-24427;
unsigned char var_17 = (unsigned char)254;
unsigned short var_18 = (unsigned short)50742;
unsigned long long int var_19 = 13990085278559104169ULL;
short var_20 = (short)18679;
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
