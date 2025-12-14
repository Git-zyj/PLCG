#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-116;
signed char var_12 = (signed char)-90;
unsigned long long int var_15 = 15624821396036877393ULL;
int zero = 0;
unsigned long long int var_18 = 11241936054014959756ULL;
signed char var_19 = (signed char)-118;
unsigned long long int var_20 = 6829572266988620993ULL;
signed char var_21 = (signed char)8;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
