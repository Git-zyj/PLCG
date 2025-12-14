#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)80;
long long int var_7 = 2823988197914149736LL;
long long int var_9 = -3537821145543293402LL;
long long int var_11 = -7817545290408224705LL;
long long int var_12 = -7807117619319428139LL;
long long int var_18 = -6221851908051728438LL;
int zero = 0;
unsigned char var_19 = (unsigned char)139;
long long int var_20 = 6710918432325463250LL;
unsigned char var_21 = (unsigned char)194;
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
