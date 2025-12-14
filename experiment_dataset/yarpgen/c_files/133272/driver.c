#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4016391276U;
signed char var_4 = (signed char)74;
long long int var_5 = 9191582258073144544LL;
long long int var_7 = -9113200334887819755LL;
unsigned long long int var_9 = 5352312808073735072ULL;
short var_16 = (short)-19655;
int zero = 0;
signed char var_17 = (signed char)110;
int var_18 = -821115396;
signed char var_19 = (signed char)-104;
long long int var_20 = -8232089452867042923LL;
void init() {
}

void checksum() {
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
