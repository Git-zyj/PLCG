#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)23181;
long long int var_7 = 951991294704760459LL;
long long int var_9 = 7007541764340292086LL;
short var_11 = (short)-8078;
signed char var_12 = (signed char)113;
int zero = 0;
unsigned short var_18 = (unsigned short)20088;
signed char var_19 = (signed char)66;
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
