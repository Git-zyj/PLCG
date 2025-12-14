#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -177813521;
unsigned long long int var_1 = 7514473358975446407ULL;
unsigned long long int var_2 = 15015051666828901604ULL;
unsigned short var_4 = (unsigned short)11448;
unsigned long long int var_6 = 14740891893967290615ULL;
signed char var_9 = (signed char)-63;
unsigned long long int var_10 = 1174635031405809525ULL;
short var_11 = (short)-17839;
unsigned short var_12 = (unsigned short)49188;
unsigned long long int var_16 = 11385003137099077375ULL;
signed char var_17 = (signed char)125;
int zero = 0;
unsigned int var_18 = 3498835589U;
unsigned int var_19 = 1065023287U;
unsigned long long int var_20 = 9463091450452999500ULL;
void init() {
}

void checksum() {
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
