#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 819271470;
long long int var_4 = 8502823048451139096LL;
long long int var_5 = -1484566238020682833LL;
long long int var_8 = 5403147313857330859LL;
unsigned short var_9 = (unsigned short)26466;
int zero = 0;
unsigned char var_10 = (unsigned char)86;
signed char var_11 = (signed char)-54;
unsigned long long int var_12 = 16345246929364028687ULL;
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
