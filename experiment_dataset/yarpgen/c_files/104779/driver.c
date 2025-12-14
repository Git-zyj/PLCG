#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -503972124;
unsigned long long int var_6 = 8975404954072012868ULL;
signed char var_8 = (signed char)68;
unsigned long long int var_9 = 14325750296491939988ULL;
signed char var_13 = (signed char)-88;
signed char var_15 = (signed char)-61;
long long int var_16 = 3055613099859117999LL;
int zero = 0;
unsigned short var_17 = (unsigned short)46333;
long long int var_18 = 7070342281226399733LL;
unsigned long long int var_19 = 18237107076527045590ULL;
unsigned long long int var_20 = 5139971452214989927ULL;
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
