#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7373524187254627851ULL;
int var_6 = 194417927;
unsigned char var_7 = (unsigned char)164;
short var_8 = (short)25103;
long long int var_9 = -6428723700539452430LL;
int zero = 0;
unsigned char var_10 = (unsigned char)183;
signed char var_11 = (signed char)44;
unsigned long long int var_12 = 13562418877066873279ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
