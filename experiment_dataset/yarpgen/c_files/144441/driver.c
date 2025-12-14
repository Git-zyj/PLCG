#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3344560924U;
unsigned short var_5 = (unsigned short)17810;
unsigned short var_6 = (unsigned short)32929;
signed char var_7 = (signed char)22;
long long int var_8 = 6182239489665962324LL;
signed char var_9 = (signed char)-20;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-20;
unsigned short var_20 = (unsigned short)26977;
unsigned short var_21 = (unsigned short)58551;
unsigned long long int var_22 = 11847679749462098781ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
