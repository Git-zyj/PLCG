#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)105;
signed char var_2 = (signed char)-126;
signed char var_3 = (signed char)-116;
unsigned int var_9 = 1348596415U;
signed char var_11 = (signed char)111;
short var_13 = (short)-2764;
int zero = 0;
unsigned long long int var_18 = 13989183588213101596ULL;
int var_19 = 180989727;
signed char var_20 = (signed char)-117;
void init() {
}

void checksum() {
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
