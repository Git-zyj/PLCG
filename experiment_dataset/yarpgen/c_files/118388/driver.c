#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1541553951975877150LL;
unsigned short var_7 = (unsigned short)55803;
signed char var_9 = (signed char)38;
long long int var_11 = 29418306927819380LL;
short var_13 = (short)24651;
long long int var_14 = -7155980386018327621LL;
signed char var_15 = (signed char)-72;
int zero = 0;
unsigned char var_20 = (unsigned char)237;
unsigned short var_21 = (unsigned short)25211;
unsigned short var_22 = (unsigned short)18168;
void init() {
}

void checksum() {
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
