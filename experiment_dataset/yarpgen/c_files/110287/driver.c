#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4419059922701908224LL;
long long int var_3 = -2777761895349746785LL;
unsigned long long int var_4 = 4109377325980359199ULL;
_Bool var_5 = (_Bool)1;
long long int var_7 = -9115179184129069241LL;
long long int var_9 = 6635571838144660480LL;
int var_11 = -1906758688;
int zero = 0;
short var_12 = (short)-28832;
unsigned long long int var_13 = 2488384400464870521ULL;
unsigned long long int var_14 = 13296939923474690322ULL;
void init() {
}

void checksum() {
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
