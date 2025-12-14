#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1602062562U;
unsigned long long int var_4 = 7050470296976851138ULL;
unsigned long long int var_6 = 9390409277576008489ULL;
unsigned short var_9 = (unsigned short)19320;
int zero = 0;
short var_11 = (short)-28156;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)169;
short var_14 = (short)9365;
unsigned int var_15 = 3368691416U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
