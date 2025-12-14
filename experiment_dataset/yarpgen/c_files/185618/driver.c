#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6804091434929185868ULL;
long long int var_2 = 8135080023026728248LL;
int var_3 = -1751801333;
unsigned long long int var_4 = 9995839816700269763ULL;
long long int var_5 = 1502809584561882241LL;
signed char var_10 = (signed char)-85;
int zero = 0;
int var_11 = -1083622177;
long long int var_12 = 2387629690128825012LL;
short var_13 = (short)-28197;
long long int var_14 = 3406796658263933765LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
