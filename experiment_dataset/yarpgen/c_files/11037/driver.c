#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)133;
int var_5 = 196108556;
short var_7 = (short)-29051;
int var_9 = -803022015;
unsigned long long int var_12 = 10934790967705660432ULL;
signed char var_13 = (signed char)50;
unsigned long long int var_14 = 2483197480738872417ULL;
unsigned int var_15 = 3804056144U;
int zero = 0;
int var_19 = 1731627387;
int var_20 = -1729118181;
unsigned long long int var_21 = 6933011160922017912ULL;
void init() {
}

void checksum() {
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
