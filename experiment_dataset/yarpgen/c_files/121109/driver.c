#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6293499514772776023LL;
long long int var_2 = -9214157627426943899LL;
unsigned short var_9 = (unsigned short)55529;
unsigned long long int var_10 = 6782114820703298510ULL;
short var_13 = (short)19143;
unsigned int var_15 = 3168540554U;
long long int var_16 = -7468735338575928335LL;
short var_17 = (short)-28783;
int zero = 0;
short var_20 = (short)-3490;
long long int var_21 = -3332084450683455437LL;
short var_22 = (short)26616;
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
