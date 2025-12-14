#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4638443413538793723LL;
int var_2 = -1987516687;
unsigned char var_5 = (unsigned char)143;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-77;
long long int var_11 = -327571448695104632LL;
unsigned long long int var_12 = 3362272623827463582ULL;
unsigned char var_15 = (unsigned char)70;
_Bool var_17 = (_Bool)0;
unsigned short var_19 = (unsigned short)43048;
int zero = 0;
unsigned short var_20 = (unsigned short)58253;
short var_21 = (short)-4781;
unsigned short var_22 = (unsigned short)39076;
unsigned short var_23 = (unsigned short)62304;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
