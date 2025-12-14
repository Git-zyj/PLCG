#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -705632149981098575LL;
unsigned char var_5 = (unsigned char)148;
long long int var_6 = 2496027951560092471LL;
signed char var_10 = (signed char)-80;
signed char var_13 = (signed char)-19;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-43;
long long int var_20 = 2288757858496241347LL;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-10107;
void init() {
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
