#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6919623752570095638LL;
unsigned short var_4 = (unsigned short)24460;
unsigned char var_6 = (unsigned char)117;
unsigned short var_13 = (unsigned short)63204;
int zero = 0;
signed char var_18 = (signed char)56;
int var_19 = -1240900585;
long long int var_20 = -8689848309534585481LL;
unsigned long long int var_21 = 7439099746978158081ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
