#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)151;
unsigned char var_3 = (unsigned char)193;
long long int var_5 = 4275779549714130196LL;
signed char var_15 = (signed char)-72;
int zero = 0;
int var_18 = -2084196272;
signed char var_19 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
