#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1849284263;
unsigned long long int var_1 = 7939829579405446072ULL;
unsigned long long int var_2 = 5638513595598712272ULL;
unsigned int var_3 = 3096415789U;
unsigned long long int var_4 = 16698311800734451703ULL;
short var_7 = (short)-9719;
signed char var_8 = (signed char)67;
int var_9 = -2131878890;
unsigned long long int var_10 = 16463814271252917159ULL;
int var_11 = 1240075107;
signed char var_12 = (signed char)-76;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)103;
unsigned short var_17 = (unsigned short)41256;
int zero = 0;
unsigned long long int var_18 = 10853501493930237735ULL;
int var_19 = 463296192;
unsigned int var_20 = 3879386462U;
signed char var_21 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
