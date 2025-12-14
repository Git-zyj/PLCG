#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7812883819855936990LL;
long long int var_4 = 2497009590585558600LL;
signed char var_7 = (signed char)-76;
long long int var_8 = -2098779857722177144LL;
signed char var_9 = (signed char)108;
long long int var_10 = -7393455701372389878LL;
int zero = 0;
int var_13 = -230649930;
unsigned short var_14 = (unsigned short)53810;
unsigned short var_15 = (unsigned short)36233;
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
