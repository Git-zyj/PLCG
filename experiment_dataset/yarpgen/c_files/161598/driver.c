#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17926805446208557946ULL;
unsigned long long int var_6 = 3430324818958329176ULL;
int var_7 = 922013538;
unsigned short var_8 = (unsigned short)57345;
unsigned long long int var_9 = 15435613843774742248ULL;
signed char var_10 = (signed char)4;
long long int var_11 = 729581028371095076LL;
short var_12 = (short)10336;
_Bool var_15 = (_Bool)0;
short var_18 = (short)26954;
int zero = 0;
signed char var_19 = (signed char)111;
unsigned long long int var_20 = 16697470985727521187ULL;
short var_21 = (short)28205;
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
