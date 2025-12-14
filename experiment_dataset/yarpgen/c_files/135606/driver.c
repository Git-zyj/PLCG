#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)146;
unsigned long long int var_2 = 18129065020914774222ULL;
short var_3 = (short)4251;
short var_6 = (short)-7222;
unsigned long long int var_7 = 10377802599993861292ULL;
int var_8 = 810070722;
int zero = 0;
unsigned long long int var_10 = 17406648631313686605ULL;
int var_11 = -1440964806;
long long int var_12 = -4999527230739886210LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
