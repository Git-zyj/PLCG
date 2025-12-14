#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1518712159U;
unsigned long long int var_5 = 8378060675150275827ULL;
int var_6 = -1204869798;
unsigned long long int var_8 = 993413780669757205ULL;
unsigned long long int var_12 = 14257666707477110887ULL;
unsigned int var_13 = 3804050811U;
signed char var_14 = (signed char)-111;
int zero = 0;
unsigned long long int var_17 = 17151191011645865691ULL;
signed char var_18 = (signed char)112;
int var_19 = 1209409408;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
