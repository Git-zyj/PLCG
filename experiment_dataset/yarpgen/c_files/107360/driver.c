#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2049563991;
unsigned int var_2 = 3594443199U;
unsigned long long int var_4 = 13021847090792634063ULL;
int var_5 = -96698247;
unsigned char var_6 = (unsigned char)173;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 5038617709509503892ULL;
int var_10 = -479064480;
signed char var_11 = (signed char)-76;
int zero = 0;
short var_13 = (short)-24557;
signed char var_14 = (signed char)-57;
unsigned long long int var_15 = 7446238627758586031ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
