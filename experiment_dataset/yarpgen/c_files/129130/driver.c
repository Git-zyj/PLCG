#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3165383444337457838ULL;
unsigned short var_7 = (unsigned short)27294;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 15714456356881378944ULL;
unsigned short var_10 = (unsigned short)45733;
int zero = 0;
unsigned long long int var_11 = 637968527662091053ULL;
unsigned long long int var_12 = 18015516411495244530ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
