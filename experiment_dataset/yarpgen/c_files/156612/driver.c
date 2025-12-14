#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)2;
unsigned long long int var_1 = 9560136067123056550ULL;
int var_2 = 913094350;
unsigned long long int var_3 = 382358711291607874ULL;
unsigned short var_5 = (unsigned short)26460;
signed char var_6 = (signed char)-71;
int var_7 = 968897493;
int var_8 = -930467784;
unsigned short var_9 = (unsigned short)53963;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)8212;
int var_12 = 1459342433;
short var_13 = (short)12998;
long long int var_14 = -3531487621013347198LL;
long long int var_15 = 1941916302731561117LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
