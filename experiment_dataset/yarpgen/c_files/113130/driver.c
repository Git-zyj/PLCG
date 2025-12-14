#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20093;
int var_1 = -1896241587;
int var_2 = -666044556;
unsigned long long int var_4 = 3058830604915758706ULL;
unsigned long long int var_7 = 14884902813379646059ULL;
unsigned short var_8 = (unsigned short)7801;
int zero = 0;
int var_12 = -1020665290;
int var_13 = -432190767;
unsigned long long int var_14 = 16926303663457919071ULL;
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
