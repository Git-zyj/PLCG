#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)21;
signed char var_2 = (signed char)89;
unsigned short var_5 = (unsigned short)52550;
unsigned int var_8 = 581414698U;
signed char var_13 = (signed char)-114;
long long int var_14 = 4511967995955360391LL;
int zero = 0;
long long int var_15 = 4016006291632773656LL;
unsigned int var_16 = 4027421148U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
