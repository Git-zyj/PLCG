#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3558955051415928819ULL;
long long int var_3 = 2255125425392471450LL;
unsigned int var_4 = 1875058933U;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)60572;
unsigned int var_8 = 415337451U;
unsigned long long int var_9 = 12072900469072655141ULL;
short var_10 = (short)-32095;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)38378;
unsigned long long int var_14 = 7056523861078795053ULL;
unsigned long long int var_15 = 8857951856600476695ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
