#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12533685205451406869ULL;
short var_5 = (short)29306;
unsigned int var_6 = 3505365103U;
unsigned long long int var_7 = 6347564660703850847ULL;
long long int var_16 = 7956321407915160771LL;
int zero = 0;
unsigned int var_19 = 1819092125U;
signed char var_20 = (signed char)-111;
unsigned char var_21 = (unsigned char)103;
int var_22 = 1361680117;
long long int arr_0 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -4381313261251820462LL;
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
