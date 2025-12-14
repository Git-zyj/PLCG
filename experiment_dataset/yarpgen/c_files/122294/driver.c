#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1698812629;
unsigned int var_3 = 4035010147U;
int var_4 = -1059326558;
short var_7 = (short)-18116;
unsigned long long int var_16 = 5219263214597314944ULL;
unsigned long long int var_18 = 401445167905870992ULL;
int zero = 0;
short var_19 = (short)-24824;
int var_20 = -335346951;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
