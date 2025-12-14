#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16082;
unsigned long long int var_11 = 7051697160452694511ULL;
signed char var_12 = (signed char)-104;
signed char var_13 = (signed char)98;
int zero = 0;
short var_19 = (short)-8395;
long long int var_20 = 4076135344208978848LL;
void init() {
}

void checksum() {
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
